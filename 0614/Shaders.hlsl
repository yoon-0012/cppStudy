////22.06.13
//////���� ��ü�� ������ ���� ��� ���۸� �����Ѵ�. 
////cbuffer cbGameObjectInfo : register(b0)
////{
////	matrix gmtxWorld : packoffset(c0);
////};
//////ī�޶��� ������ ���� ��� ���۸� �����Ѵ�. 
////cbuffer cbCameraInfo : register(b1)
////{
////	matrix gmtxView : packoffset(c0);
////	matrix gmtxProjection : packoffset(c4);
////};
//
//
////�÷��̾� ��ü�� �����͸� ���� ��� ����
//cbuffer cbPlayerInfo : register(b0)
//{
//	matrix gmtxPlayerWorld : packoffset(c0);
//};
////ī�޶� ��ü�� �����͸� ���� ��� ����(����ŧ�� ���� ����� ���Ͽ� ī�޶��� ��ġ ���͸� �߰�)
//cbuffer cbCameraInfo : register(b1)
//{
//	matrix gmtxView : packoffset(c0);
//	matrix gmtxProjection : packoffset(c4);
//	float3 gvCameraPosition : packoffset(c8);
//};
////���� ��ü�� �����͸� ���� ��� ����(���� ��ü�� ���� ���� ��ȣ�� �߰�)
//cbuffer cbGameObjectInfo : register(b2)
//{
//	matrix gmtxGameObject : packoffset(c0);
//	uint gnMaterial : packoffset(c4);
//};
//#include "Light.hlsl"
//
////���� ������ ���
//#define _WITH_VERTEX_LIGHTING
////���� ���̴��� �Է� ���� ����
//struct VS_LIGHTING_INPUT
//{
//	float3 position : POSITION;
//	float3 normal : NORMAL;
//};
//
////���� ���̴��� ��� ���� ����
//struct VS_LIGHTING_OUTPUT
//{
//	float4 position : SV_POSITION;
//	float3 positionW : POSITION;
//#ifdef _WITH_VERTEX_LIGHTING
//	float4 color : COLOR;
//#else
//	float3 normalW : NORMAL;
//#endif
//};
//
//VS_LIGHTING_OUTPUT VSPlayer(VS_LIGHTING_INPUT input)
//{
//	VS_LIGHTING_OUTPUT output;
//	output.position = mul(mul(mul(float4(input.position, 1.0f), gmtxPlayerWorld),
//		gmtxView), gmtxProjection);
//	//output.color = input.color;
//	output.color = Lighting(output.positionW, normalize(normalW);
//	return(output);
//}
//float4 PSPlayer(VS_LIGHTING_OUTPUT input) : SV_TARGET
//{
//return(input.color);
//}
//
//////���� ������ ���
////#define _WITH_VERTEX_LIGHTING
//////���� ���̴��� �Է� ���� ����
////struct VS_LIGHTING_INPUT
////{
////	float3 position : POSITION;
////	float3 normal : NORMAL;
////};
////
//////���� ���̴��� ��� ���� ����
////struct VS_LIGHTING_OUTPUT
////{
////	float4 position : SV_POSITION;
////	float3 positionW : POSITION;
////#ifdef _WITH_VERTEX_LIGHTING
////	float4 color : COLOR;
////#else
////	float3 normalW : NORMAL;
////#endif
////};
//
////���� ���̴� �Լ�
//VS_LIGHTING_OUTPUT VSLighting(VS_LIGHTING_INPUT input)
//{
//	VS_LIGHTING_OUTPUT output;
//	output.positionW = (float3)mul(float4(input.position, 1.0f), gmtxGameObject);
//	output.position = mul(mul(float4(output.positionW, 1.0f), gmtxView), gmtxProjection);
//	float3 normalW = mul(input.normal, (float3x3)gmtxGameObject);
//#ifdef _WITH_VERTEX_LIGHTING
//	output.color = Lighting(output.positionW, normalize(normalW));
//#else
//	output.normalW = normalW;
//#endif
//	return(output);
//}
////�ȼ� ���̴� �Լ�
//float4 PSLighting(VS_LIGHTING_OUTPUT input) : SV_TARGET
//{
//#ifdef _WITH_VERTEX_LIGHTING
//return(input.color);
//#else
//float3 normalW = normalize(input.normalW);
//float4 color = Lighting(input.positionW, normalW);
//return(color);
//#endif
//}
////
//
//
//
////���� ���̴��� �Է��� ���� ����ü�� �����Ѵ�. 
//struct VS_INPUT
//{
//	float3 position : POSITION;
//	float4 color : COLOR;
//};
////���� ���̴��� ���(�ȼ� ���̴��� �Է�)�� ���� ����ü�� �����Ѵ�. 
//struct VS_OUTPUT
//{
//	float4 position : SV_POSITION;
//	float4 color : COLOR;
//};
////���� ���̴��� �����Ѵ�. 
//VS_OUTPUT VSDiffused(VS_INPUT input)
//{
//	VS_OUTPUT output;
//	//������ ��ȯ(���� ��ȯ, ī�޶� ��ȯ, ���� ��ȯ)�Ѵ�. 
//	output.position = mul(mul(mul(float4(input.position, 1.0f), gmtxWorld), gmtxView), 
//	gmtxProjection);
//	output.color = input.color;
//	return(output);
//}
////�ȼ� ���̴��� �����Ѵ�. 
//float4 PSDiffused(VS_OUTPUT input) : SV_TARGET
//{
//	return(input.color);
//}
//
//
//
//
//
//


////���� ��ü�� ������ ���� ��� ���۸� �����Ѵ�. 
//cbuffer cbGameObjectInfo : register(b0)
//{
//	matrix gmtxWorld : packoffset(c0);
//};
////ī�޶��� ������ ���� ��� ���۸� �����Ѵ�. 
//cbuffer cbCameraInfo : register(b1)
//{
//	matrix gmtxView : packoffset(c0);
//	matrix gmtxProjection : packoffset(c4);
//};



////////////////////////////////////////////////////////////////////////
//�÷��̾� ��ü�� �����͸� ���� ��� ����
cbuffer cbPlayerInfo : register(b0)
{
	matrix gmtxPlayerWorld : packoffset(c0);
};
//ī�޶� ��ü�� �����͸� ���� ��� ����(����ŧ�� ���� ����� ���Ͽ� ī�޶��� ��ġ ���͸� �߰�)
cbuffer cbCameraInfo : register(b1)
{
	matrix gmtxView : packoffset(c0);
	matrix gmtxProjection : packoffset(c4);
	float3 gvCameraPosition : packoffset(c8);
};
//���� ��ü�� �����͸� ���� ��� ����(���� ��ü�� ���� ���� ��ȣ�� �߰�)
cbuffer cbGameObjectInfo : register(b2)
{
	matrix gmtxGameObject : packoffset(c0);
	uint gnMaterial : packoffset(c4);
};
#include "Light.hlsl"

//����ü �߰�
//���� ������ ���
#define _WITH_VERTEX_LIGHTING
//���� ���̴��� �Է� ���� ����
struct VS_LIGHTING_INPUT
{
	float3 position : POSITION;
	float3 normal : NORMAL;
};
//���� ���̴��� ��� ���� ����
struct VS_LIGHTING_OUTPUT
{
	float4 position : SV_POSITION;
	float3 positionW : POSITION;
#ifdef _WITH_VERTEX_LIGHTING
	float4 color : COLOR;
#else
	float3 normalW : NORMAL;
#endif
};
//���� ���̴��� �Է��� ���� ����ü�� �����Ѵ�. 
struct VS_INPUT
{
	float3 position : POSITION;
	float4 color : COLOR;
};
//���� ���̴��� ���(�ȼ� ���̴��� �Է�)�� ���� ����ü�� �����Ѵ�. 
struct VS_OUTPUT
{
	float4 position : SV_POSITION;
	float4 color : COLOR;
};
//

//VS_DIFFUSED_OUTPUT VSPlayer(VS_DIFFUSED_INPUT input)
VS_OUTPUT VSPlayer(VS_INPUT input)
//VS_LIGHTING_OUTPUT VSPlayer(VS_LIGHTING_INPUT input)//VSPlayer(VS_LIGHTING_INPUT input)
{
	//VS_DIFFUSED_OUTPUT output;
	VS_OUTPUT output;
	//VS_LIGHTING_OUTPUT output;

	output.position = mul(mul(mul(float4(input.position, 1.0f), gmtxPlayerWorld), gmtxView), gmtxProjection);
	//output.position = float4(1, 0, 1, 0);

	output.color = input.color;
	////output.color = Lighting(output.positionW,  output.normalW);
	//output.color = float4(1, 0, 1, 0.5);
	return(output);
}
float4 PSPlayer(VS_OUTPUT input) :SV_TARGET
//float4 PSPlayer(VS_DIFFUSED_OUTPUT input) : SV_TARGET
//float4 PSPlayer(VS_LIGHTING_OUTPUT input) : SV_TARGET
{
return(input.color);
}
////���� ������ ���
//#define _WITH_VERTEX_LIGHTING
////���� ���̴��� �Է� ���� ����
//struct VS_LIGHTING_INPUT
//{
//	float3 position : POSITION;
//	float3 normal : NORMAL;
//};
////���� ���̴��� ��� ���� ����
//struct VS_LIGHTING_OUTPUT
//{
//	float4 position : SV_POSITION;
//	float3 positionW : POSITION;
//#ifdef _WITH_VERTEX_LIGHTING
//	float4 color : COLOR;
//#else
//	float3 normalW : NORMAL;
//#endif
//};





//���� ���̴� �Լ�
VS_LIGHTING_OUTPUT VSLighting(VS_LIGHTING_INPUT input)
{
	VS_LIGHTING_OUTPUT output;
	output.positionW = (float3)mul(float4(input.position, 1.0f), gmtxGameObject);
	output.position = mul(mul(float4(output.positionW, 1.0f), gmtxView), gmtxProjection);
	float3 normalW = mul(input.normal, (float3x3)gmtxGameObject);
#ifdef _WITH_VERTEX_LIGHTING
	output.color = Lighting(output.positionW, normalize(normalW));
#else
	output.normalW = normalW;
#endif
	return(output);
}
//�ȼ� ���̴� �Լ�
float4 PSLighting(VS_LIGHTING_OUTPUT input) : SV_TARGET
{
#ifdef _WITH_VERTEX_LIGHTING
return(input.color);
#else
float3 normalW = normalize(input.normalW);
float4 color = Lighting(input.positionW, normalW);
return(color);
#endif
}
//////////////////////////////////////////////////////////////////////////



//�ȼ� ���̴��� �����Ѵ�. 
float4 PSDiffused(VS_OUTPUT input) : SV_TARGET
{
	return(input.color);
}


//���� ���̴��� �����Ѵ�. 
VS_OUTPUT VSDiffused(VS_INPUT input)
{
	VS_OUTPUT output;
	//������ ��ȯ(���� ��ȯ, ī�޶� ��ȯ, ���� ��ȯ)�Ѵ�. 
	output.position = mul(mul(mul(float4(input.position, 1.0f), gmtxPlayerWorld), gmtxView), gmtxProjection); //gmtxWorld), gmtxView),gmtxProjection);
	output.color = input.color;
	return(output);
}






