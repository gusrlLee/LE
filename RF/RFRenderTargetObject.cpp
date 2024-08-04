#include "RFRenderTargetObject.h"


SPtr<RFRenderTargetObject> RFRenderTargetObject::Create(std::string object_name)
{
    return CreateSPtr<RFRenderTargetObject>(object_name);
}

RFRenderTargetObject::RFRenderTargetObject(std::string object_name)
{
    m_name = object_name;
    simd::float3 triangleVertices[] = {
        {-0.5f, -0.5f, 0.0f},
        { 0.5f, -0.5f, 0.0f},
        { 0.0f,  0.5f, 0.0f}
    };

    m_buffer = RFDevice::GetInstance()->newBuffer(&triangleVertices, sizeof(triangleVertices), MTL::ResourceStorageModeShared);
}

RFRenderTargetObject::~RFRenderTargetObject()
{
    m_buffer->release();
}

void RFRenderTargetObject::AddMeshData(std::string mesh_data_file_path)
{

}

void RFRenderTargetObject::DeleteMeshData()
{

}

void RFRenderTargetObject::AddRenderFeature(std::string render_feature_name)
{

}

void RFRenderTargetObject::DeleteRenderFeature(std::string render_feature_name)
{

}
