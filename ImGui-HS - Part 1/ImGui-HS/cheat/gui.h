#pragma once
#include <d3d9.h>

namespace gui 
{
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;

	inline HWND window = nullptr;
	inline WNDCLASSEXA winodwClss = { };

	inline POINTS position = { };

	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3D9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	void CreatHwindow(
		const char* windowName,
		const char* clssName) noexcept;
	void DestroyHwindow() noexcept;

	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}