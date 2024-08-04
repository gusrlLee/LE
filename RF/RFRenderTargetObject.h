#pragma once 

#include "pch.h"
#include "RFDevice.h"

class RFRenderTargetObject {
    public: 
        static SPtr<RFRenderTargetObject> Create(std::string object_name);

        RFRenderTargetObject(std::string obejct_name);
        ~RFRenderTargetObject();

        void AddMeshData(std::string mesh_data_file_path);
        void DeleteMeshData();

        void AddRenderFeature(std::string render_feature_name);
        void DeleteRenderFeature(std::string render_feature_name);

    private:
        std::string m_name;
        MTL::Buffer* m_buffer;
};
