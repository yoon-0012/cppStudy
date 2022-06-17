#pragma once
#include "stdafx.h"
//#include "Timer.h"
#include "Shader.h"
#include "GameObject.h"

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

	//22.06.14
	CPlayer* m_pPlayer;
protected:
	//��ġ(Batch) ó���� �ϱ� ���Ͽ� ���� ���̴����� ����Ʈ�� ǥ���Ѵ�. 
	CObjectsShader *m_pShaders = NULL;
	int m_nShaders = 0;

	ID3D12RootSignature* m_pd3dGraphicsRootSignature = NULL;

	//ID3D12PipelineState** m_pd3dPipelineState = NULL;
	ID3D12PipelineState* m_pd3dPipelineState = NULL;
};

