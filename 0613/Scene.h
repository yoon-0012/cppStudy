#pragma once
#include "stdafx.h"
//#include "Timer.h"
#include "Shader.h"
#include "GameObject.h"

//22.06.13/////////////////////////////////////////////////////////////////////
struct LIGHT
{
	XMFLOAT4 m_xmf4Ambient;
	XMFLOAT4 m_xmf4Diffuse;
	XMFLOAT4 m_xmf4Specular;
	XMFLOAT3 m_xmf3Position;
	float m_fFalloff;
	XMFLOAT3 m_xmf3Direction;
	float m_fTheta; //cos(m_fTheta)
	XMFLOAT3 m_xmf3Attenuation;
	float m_fPhi; //cos(m_fPhi)
	bool m_bEnable;
	int m_nType;
	float m_fRange;
	float padding;
};
struct LIGHTS
{
	LIGHT m_pLights[MAX_LIGHTS];
	XMFLOAT4 m_xmf4GlobalAmbient;
};
struct MATERIALS
{
	MATERIAL m_pReflections[MAX_MATERIALS];
};
////////////////////////////////////////////////////////////

class CPlayer;
class CScene
{
public:
	CScene();
	~CScene();
	//������ ���콺�� Ű���� �޽����� ó���Ѵ�. 
	bool OnProcessingMouseMessage(HWND hWnd, UINT nMessageID, WPARAM wParam, LPARAM 
	lParam);
	bool OnProcessingKeyboardMessage(HWND hWnd, UINT nMessageID, WPARAM wParam, LPARAM
		lParam);
	void BuildObjects(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList
		* pd3dCommandList);
	void ReleaseObjects();
	//bool ProcessInput(UCHAR* pKeysBuffer);
	bool ProcessInput();
	void AnimateObjects(float fTimeElapsed);
	//void Render(ID3D12GraphicsCommandList* pd3dCommandList);
	void Render(ID3D12GraphicsCommandList* pd3dCommandList, CCamera* pCamera);
	void PrepareRender(ID3D12GraphicsCommandList* pd3dCommandList);
	void ReleaseUploadBuffers();
	//�׷��� ��Ʈ �ñ׳��ĸ� �����Ѵ�. 
	ID3D12RootSignature *CreateGraphicsRootSignature(ID3D12Device *pd3dDevice);
	ID3D12RootSignature* GetGraphicsRootSignature();

	void CreateGraphicsPipelineState(ID3D12Device* pd3dDevice);

	//22.06.13//////////////////////////////////////////////////////////////////////
	//���� ��� ����� ������ ����
	void BuildLightsAndMaterials();
	//���� ��� ����� ������ ���� ���ҽ��� �����ϰ� ����
	virtual void CreateShaderVariables(ID3D12Device* pd3dDevice, ID3D12GraphicsCommandList
		* pd3dCommandList);
	virtual void UpdateShaderVariables(ID3D12GraphicsCommandList* pd3dCommandList);
	virtual void ReleaseShaderVariables();
/// /////////////////////////////////////////////////////////////////////////////////

protected:
	//��ġ(Batch) ó���� �ϱ� ���Ͽ� ���� ���̴����� ����Ʈ�� ǥ���Ѵ�. 
	CObjectsShader *m_pShaders = NULL;
	int m_nShaders = 0;

	ID3D12RootSignature* m_pd3dGraphicsRootSignature = NULL;

	//ID3D12PipelineState** m_pd3dPipelineState = NULL;
	ID3D12PipelineState* m_pd3dPipelineState = NULL;

	//22.06.13///////////////////////////////////////////////////////////////////////
public:
	CPlayer* m_pPlayer = NULL;
protected:
	//���� ����
	LIGHTS* m_pLights = NULL;
	//������ ��Ÿ���� ���ҽ��� ���ҽ��� ���� �������̴�. 
	ID3D12Resource *m_pd3dcbLights = NULL;
	LIGHTS* m_pcbMappedLights = NULL;
	//���� ��ü�鿡 ����Ǵ� ����
	MATERIALS* m_pMaterials = NULL;
	//������ ��Ÿ���� ���ҽ��� ���ҽ��� ���� �������̴�. 
	ID3D12Resource *m_pd3dcbMaterials = NULL;
	MATERIAL* m_pcbMappedMaterials = NULL;
	///////////////////////////////////////////////////////////////////////////////////////////////
};



