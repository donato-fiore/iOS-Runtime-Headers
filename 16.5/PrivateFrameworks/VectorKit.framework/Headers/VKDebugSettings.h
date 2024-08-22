// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDEBUGSETTINGS_H
#define VKDEBUGSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKDebugSettings : NSObject {
    BOOL _highlightRouteLineSnappingRegion;
    BOOL _shouldOverrideSuperSampleKernelSize;
    VKDebugLabelAnimationParameters _hideLabelAnimationParams;
    VKDebugLabelAnimationParameters _showLabelAnimationParams;
    unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> _enabledLogicConsoles;
}


@property (nonatomic) BOOL altitudeDisableC3mTextureLoading; // ivar: _altitudeDisableC3mTextureLoading
@property (nonatomic) float altitudeFadeSpeed; // ivar: _altitudeFadeSpeed
@property (nonatomic) BOOL altitudeFreezeViewNode; // ivar: _altitudeFreezeViewNode
@property (nonatomic) float altitudeHideMeshTime; // ivar: _altitudeHideMeshTime
@property (nonatomic) BOOL altitudeHighResSatellite; // ivar: _altitudeHighResSatellite
@property (nonatomic) float altitudeLodScale; // ivar: _altitudeLodScale
@property (nonatomic) BOOL altitudeMipmapFlyover; // ivar: _altitudeMipmapFlyover
@property (nonatomic) BOOL altitudeMipmapObjectTree; // ivar: _altitudeMipmapObjectTree
@property (nonatomic) BOOL altitudeMipmapSatellite; // ivar: _altitudeMipmapSatellite
@property (nonatomic) BOOL altitudePauseLoading; // ivar: _altitudePauseLoading
@property (nonatomic) BOOL altitudePrintRenderedTilesStat; // ivar: _altitudePrintRenderedTilesStat
@property (nonatomic) BOOL altitudeShowNightLight; // ivar: _altitudeShowNightLight
@property (nonatomic) BOOL altitudeShowTileBounds; // ivar: _altitudeShowTileBounds
@property (nonatomic) BOOL altitudeShowTriggerBounds; // ivar: _altitudeShowTriggerbounds
@property (nonatomic) BOOL altitudeTexturePaging; // ivar: _altitudeTexturePaging
@property (nonatomic) float altitudeTileQualityThreshold; // ivar: _altitudeTileQualityThreshold
@property (nonatomic) BOOL altitudeTourSpeedup; // ivar: _altitudeTourSpeedup
@property (nonatomic) float altitudeTourSpeedupFactor; // ivar: _altitudeTourSpeedupFactor
@property (readonly, nonatomic) float animationTimeMultiplier;
@property (nonatomic) unsigned int anisotropy; // ivar: _anisotropy
@property (readonly, nonatomic, getter=isAnyLogicConsoleEnabled) BOOL anyLogicConsoleEnabled;
@property (nonatomic) BOOL arAlwaysShowOneContinueLabel; // ivar: _arAlwaysShowOneContinueLabel
@property (nonatomic) float arCameraElevationOffset; // ivar: _arCameraElevationOffset
@property (nonatomic) float arDebugArrivalPointSphereScaleX; // ivar: _arDebugArrivalPointSphereScaleX
@property (nonatomic) float arDebugArrivalPointSphereScaleY; // ivar: _arDebugArrivalPointSphereScaleY
@property (nonatomic) float arDebugArrivalPointSphereScaleZ; // ivar: _arDebugArrivalPointSphereScaleZ
@property (nonatomic) BOOL arDebugDrawLabelFeatureBounds; // ivar: _arDebugDrawLabelFeatureBounds
@property (nonatomic) BOOL arDebugDrawMeshFeatureBounds; // ivar: _arDebugDrawMeshFeatureBounds
@property (nonatomic) BOOL arDebugLockLocalizingState; // ivar: _arDebugLockLocalizingState
@property (nonatomic) BOOL arDebugMiniMap; // ivar: _arDebugMiniMap
@property (nonatomic) float arDebugMiniMapMapRectSize; // ivar: _arDebugMiniMapMapRectSize
@property (nonatomic) float arDebugMiniMapScreenRectSize; // ivar: _arDebugMiniMapScreenRectSize
@property (nonatomic) float arDebugMiniMapScreenRectXOffset; // ivar: _arDebugMiniMapScreenRectXOffset
@property (nonatomic) float arDebugMiniMapScreenRectYOffset; // ivar: _arDebugMiniMapScreenRectYOffset
@property (nonatomic) float arDebugSceneFeatureDistance; // ivar: _arDebugSceneFeatureDistance
@property (nonatomic) float arDebugSceneFeatureHeading; // ivar: _arDebugSceneFeatureHeading
@property (copy, nonatomic) NSString *arDebugSceneFeatureText; // ivar: _arDebugSceneFeatureText
@property (nonatomic) unsigned char arDebugSceneFeatureType; // ivar: _arDebugSceneFeatureType
@property (nonatomic) unsigned char arDebugSceneForcedLayoutType; // ivar: _arDebugSceneForcedLayoutType
@property (nonatomic) unsigned int arDebugScenePoiType; // ivar: _arDebugScenePoiType
@property (nonatomic) float arDebugStylingBaseScalingFactor; // ivar: _arDebugStylingBaseScalingFactor
@property (nonatomic) float arDebugStylingPOIEnvMapIntensity; // ivar: _arDebugStylingPOIEnvMapIntensity
@property (nonatomic) float arDebugStylingPOIIconScaleFactor; // ivar: _arDebugStylingPOIIconScaleFactor
@property (nonatomic) float arDebugStylingPOILightIntensity; // ivar: _arDebugStylingPOILightIntensity
@property (nonatomic) BOOL arDebugUseLastStepAsArrivalLocation; // ivar: _arDebugUseLastStepAsArrivalLocation
@property (nonatomic) float arDefaultHeight; // ivar: _arDefaultHeight
@property (nonatomic) BOOL arEnableCameraFeed; // ivar: _arEnableCameraFeed
@property (nonatomic) BOOL arEnableEnvironmentMap; // ivar: _arEnableEnvironmentMap
@property (nonatomic) BOOL arEnableRouteLineDebugMeshes; // ivar: _arEnableRouteLineDebugMeshes
@property (nonatomic) float arFallDuration; // ivar: _arFallDuration
@property (nonatomic) float arFallOffset; // ivar: _arFallOffset
@property (nonatomic) float arFallStart; // ivar: _arFallStart
@property (nonatomic) BOOL arForceLabelsViewOriented; // ivar: _arForceLabelsViewOriented
@property (nonatomic) BOOL arForceOccludedStyling; // ivar: _arForceOccludedStyling
@property (nonatomic) BOOL arIsArrivalAnimationEnabled; // ivar: _arIsArrivalAnimationEnabled
@property (nonatomic) float arJumpDuration; // ivar: _arJumpDuration
@property (nonatomic) float arJumpOffset; // ivar: _arJumpOffset
@property (nonatomic) float arJumpStart; // ivar: _arJumpStart
@property (nonatomic) BOOL arLabelingStateOverlay; // ivar: _arLabelingStateOverlay
@property (nonatomic) float arManeuverDebugElevationOffset; // ivar: _arManeuverDebugElevationOffset
@property (nonatomic) BOOL arOverrideDefaults; // ivar: _arOverrideDefaults
@property (nonatomic) NSUInteger arPinchGesture; // ivar: _arPinchGesture
@property (nonatomic) float arPulseDuration; // ivar: _arPulseDuration
@property (nonatomic) float arPulseNumberOfRepeats; // ivar: _arPulseNumberOfRepeats
@property (nonatomic) float arPulseOffset; // ivar: _arPulseOffset
@property (nonatomic) float arPulseStart; // ivar: _arPulseStart
@property (nonatomic) BOOL arRenderAtNativeRate; // ivar: _arRenderAtNativeRate
@property (nonatomic) BOOL arRenderAvoidanceObjects; // ivar: _arRenderAvoidanceObjects
@property (nonatomic) BOOL arRenderAvoidanceObjectsIntersection; // ivar: _arRenderAvoidanceObjectsIntersection
@property (nonatomic) float arRotateDuration; // ivar: _arRotateDuration
@property (nonatomic) float arRotateOffset; // ivar: _arRotateOffset
@property (nonatomic) float arRotateStart; // ivar: _arRotateStart
@property (nonatomic) BOOL arShowAllLabels; // ivar: _arShowAllLabels
@property (nonatomic) NSUInteger arSwipeGesture; // ivar: _arSwipeGesture
@property (nonatomic) float arVirtualPlaneHeight; // ivar: _arVirtualPlaneHeight
@property (nonatomic) float buildingPOIPitchScaleFullHeightAngle; // ivar: _buildingPOIPitchScaleFullHeightAngle
@property (nonatomic) float buildingPOIPitchScaleMaxZoom; // ivar: _buildingPOIPitchScaleMaxZoom
@property (nonatomic) float buildingPOIPitchScaleMaxZoomFactor; // ivar: _buildingPOIPitchScaleMaxZoomFactor
@property (nonatomic) float buildingPOIPitchScaleMinZoom; // ivar: _buildingPOIPitchScaleMinZoom
@property (nonatomic) BOOL compressedBuildingsDisabled; // ivar: _compressedBuildingsDisabled
@property (nonatomic) BOOL constantlyChangeTileGroup; // ivar: _constantlyChangeTileGroup
@property (nonatomic) CGFloat constantlyChangeTileGroupInterval; // ivar: _constantlyChangeTileGroupInterval
@property (nonatomic) unsigned int continuousMultiSectionRouteAdditionalOverlap; // ivar: _continuousMultiSectionRouteAdditionalOverlap
@property (nonatomic) BOOL daVinciASTCTextureSideLoadEnabled; // ivar: _daVinciASTCTextureSideLoadEnabled
@property (nonatomic) BOOL daVinciAdvancedLightingEnabled; // ivar: _daVinciAdvancedLightingEnabled
@property (nonatomic) BOOL daVinciAridityGroundTintingEnabled; // ivar: _daVinciAridityGroundTintingEnabled
@property (nonatomic) float daVinciAtmosphereColorMidpoint; // ivar: _daVinciAtmosphereColorMidpoint
@property (nonatomic) float daVinciAtmosphereMaxHeight; // ivar: _daVinciAtmosphereMaxHeight
@property (nonatomic) BOOL daVinciBiasLatitudeGlobeTileSelection; // ivar: _daVinciBiasLatitudeGlobeTileSelection
@property (nonatomic) float daVinciBrightnessRangeMaxOverride; // ivar: _daVinciBrightnessRangeMaxOverride
@property (nonatomic) float daVinciBrightnessRangeMinOverride; // ivar: _daVinciBrightnessRangeMinOverride
@property (nonatomic) BOOL daVinciBuildingHeights; // ivar: _daVinciBuildingHeights
@property (nonatomic) float daVinciBuildingRoundingRadius; // ivar: _daVinciBuildingRoundingRadius
@property (nonatomic) BOOL daVinciCameraController; // ivar: _daVinciCameraController
@property (nonatomic) BOOL daVinciCameraControllerForceMercatorZoom; // ivar: _daVinciCameraControllerForceMercatorZoom
@property (nonatomic) BOOL daVinciColorBuildings; // ivar: _daVinciColorBuildings
@property (nonatomic) BOOL daVinciColorCorrectionOverride; // ivar: _daVinciColorCorrectionOverride
@property (nonatomic) unsigned short daVinciDebugRasterStyleAttribute; // ivar: _daVinciDebugRasterStyleAttribute
@property (nonatomic) BOOL daVinciDrawCollisionMesh; // ivar: _daVinciDrawCollisionMesh
@property (nonatomic) unsigned char daVinciElevationScalingMaxZ; // ivar: _daVinciElevationScalingMaxZ
@property (nonatomic) float daVinciElevationScalingMaxZFactor; // ivar: _daVinciElevationScalingMaxZFactor
@property (nonatomic) unsigned char daVinciElevationScalingMinZ; // ivar: _daVinciElevationScalingMinZ
@property (nonatomic) float daVinciElevationScalingMinZFactor; // ivar: _daVinciElevationScalingMinZFactor
@property (nonatomic) BOOL daVinciElevationScalingNormalsOnly; // ivar: _daVinciElevationScalingNormalsOnly
@property (nonatomic) BOOL daVinciEnablePBR; // ivar: _daVinciEnablePBR
@property (nonatomic) BOOL daVinciEnableRibbonAntialiasing; // ivar: _daVinciEnableRibbonAntialiasing
@property (nonatomic) BOOL daVinciEntityDebugHighlighting; // ivar: _daVinciEntityDebugHighlighting
@property (nonatomic) BOOL daVinciForceElevatedGround; // ivar: _daVinciForceElevatedGround
@property (nonatomic) BOOL daVinciGlobeLighting; // ivar: _daVinciGlobeLighting
@property (nonatomic) BOOL daVinciGlobeScalingCorrection; // ivar: _daVinciGlobeScalingCorrection
@property (nonatomic) float daVinciGlobeSplinedMaxZoom; // ivar: _daVinciGlobeSplinedMaxZoom
@property (nonatomic) BOOL daVinciGroundAmbientOcclusionEnabled; // ivar: _daVinciGroundAmbientOcclusionEnabled
@property (nonatomic) float daVinciGroundAmbientOcclusionIntensity; // ivar: _daVinciGroundAmbientOcclusionIntensity
@property (nonatomic) float daVinciGroundAmbientOcclusionRadius; // ivar: _daVinciGroundAmbientOcclusionRadius
@property (nonatomic) float daVinciHorizonGlowSharpness; // ivar: _daVinciHorizonGlowSharpness
@property (nonatomic) float daVinciHorizonGlowStrength; // ivar: _daVinciHorizonGlowStrength
@property (nonatomic) BOOL daVinciLightingDebugAlbedoOnly; // ivar: _daVinciLightingDebugAlbedoOnly
@property (nonatomic) BOOL daVinciLightingDebugLightsOnly; // ivar: _daVinciLightingDebugLightsOnly
@property (nonatomic) BOOL daVinciLightingDebugShowLitSphere; // ivar: _daVinciLightingDebugShowLitSphere
@property (nonatomic) BOOL daVinciLightingDebugShowNormals; // ivar: _daVinciLightingDebugShowNormals
@property (nonatomic) BOOL daVinciLightingDebugShowOverexposure; // ivar: _daVinciLightingDebugShowOverexposure
@property (nonatomic) BOOL daVinciLightingStylesOverrideEnabled; // ivar: _daVinciLightingStylesOverrideEnabled
@property (nonatomic) BOOL daVinciMaterialRastersEnabled; // ivar: _daVinciMaterialRastersEnabled
@property (nonatomic) float daVinciMetaTileOpacity; // ivar: _daVinciMetaTileOpacity
@property (nonatomic) BOOL daVinciOverrideElevationScaling; // ivar: _daVinciOverrideElevationScaling
@property (nonatomic) BOOL daVinciPitchScaleEnabled; // ivar: _daVinciPitchScaleEnabled
@property (nonatomic) BOOL daVinciPitchedGlobeTileSelection; // ivar: _daVinciPitchedGlobeTileSelection
@property (nonatomic) float daVinciPlanarOffsetOverride; // ivar: _daVinciPlanarOffsetOverride
@property (nonatomic) BOOL daVinciPlanarOverride; // ivar: _daVinciPlanarOverride
@property (nonatomic) float daVinciPlanarPixelPerMeterOverride; // ivar: _daVinciPlanarPixelPerMeterOverride
@property (nonatomic) float daVinciPlanarTilingOverride; // ivar: _daVinciPlanarTilingOverride
@property (nonatomic) BOOL daVinciRenderLineGeometry; // ivar: _daVinciRenderLineGeometry
@property (nonatomic) BOOL daVinciRenderingDebugShowUVs; // ivar: _daVinciRenderingDebugShowUVs
@property (nonatomic) BOOL daVinciResourceOverrideEnabled; // ivar: _daVinciResourceOverrideEnabled
@property (nonatomic) BOOL daVinciRoundBuildings; // ivar: _daVinciRoundBuildings
@property (nonatomic) float daVinciRouteLineMaskBlurSigma; // ivar: _daVinciRouteLineMaskBlurSigma
@property (nonatomic) float daVinciRouteLineMaskScale; // ivar: _daVinciRouteLineMaskScale
@property (nonatomic) unsigned int daVinciSSAOBlurSize; // ivar: _daVinciSSAOBlurSize
@property (nonatomic) float daVinciSSAOBlurriness; // ivar: _daVinciSSAOBlurriness
@property (nonatomic) BOOL daVinciSSAODepthAwareBlurEnabled; // ivar: _daVinciSSAODepthAwareBlurEnabled
@property (nonatomic) BOOL daVinciSSAODepthAwareUpsampleEnabled; // ivar: _daVinciSSAODepthAwareUpsampleEnabled
@property (nonatomic) float daVinciSSAODepthBlurriness; // ivar: _daVinciSSAODepthBlurriness
@property (nonatomic) float daVinciSSAODepthThreshold; // ivar: _daVinciSSAODepthThreshold
@property (nonatomic) BOOL daVinciSSAOEnableBlur; // ivar: _daVinciSSAOEnableBlur
@property (nonatomic) BOOL daVinciSSAOEnabled; // ivar: _daVinciSSAOEnabled
@property (nonatomic) BOOL daVinciSSAOHighSampleCountEnabled; // ivar: _daVinciSSAOHighSampleCountEnabled
@property (nonatomic) float daVinciSSAOIntensity; // ivar: _daVinciSSAOIntensity
@property (nonatomic) float daVinciSSAOKernelRadius; // ivar: _daVinciSSAOKernelRadius
@property (nonatomic) BOOL daVinciSSAOOcclusionOnly; // ivar: _daVinciSSAOOcclusionOnly
@property (nonatomic) float daVinciSSAOTextureScale; // ivar: _daVinciSSAOTextureScale
@property (nonatomic) float daVinciSSAOUpsampleDepthThreshold; // ivar: _daVinciSSAOUpsampleDepthThreshold
@property (nonatomic) float daVinciSaturationRangeMaxOverride; // ivar: _daVinciSaturationRangeMaxOverride
@property (nonatomic) float daVinciSaturationRangeMinOverride; // ivar: _daVinciSaturationRangeMinOverride
@property (nonatomic) float daVinciShadowIntensity; // ivar: _daVinciShadowIntensity
@property (nonatomic) BOOL daVinciShowCenterLineRoads; // ivar: _daVinciShowCenterLineRoads
@property (nonatomic) BOOL daVinciShowMissingMaterials; // ivar: _daVinciShowMissingMaterials
@property (nonatomic) BOOL daVinciShowStackingVenues; // ivar: _daVinciShowStackingVenues
@property (nonatomic) unsigned char daVinciSmoothEdgeMaxZ; // ivar: _daVinciSmoothEdgeMaxZ
@property (nonatomic) float daVinciSmoothEdgeMaxZAngle; // ivar: _daVinciSmoothEdgeMaxZAngle
@property (nonatomic) unsigned char daVinciSmoothEdgeMinZ; // ivar: _daVinciSmoothEdgeMinZ
@property (nonatomic) float daVinciSmoothEdgeMinZAngle; // ivar: _daVinciSmoothEdgeMinZAngle
@property (nonatomic) BOOL daVinciTemperatureGroundTintingEnabled; // ivar: _daVinciTemperatureGroundTintingEnabled
@property (nonatomic) BOOL daVinciTintBandFillWireframeEnabled; // ivar: _daVinciTintBandFillWireframeEnabled
@property (nonatomic) BOOL daVinciTintBandStrokeDistanceDebugEnabled; // ivar: _daVinciTintBandStrokeDistanceDebugEnabled
@property (nonatomic) BOOL daVinciTintBandStrokeWireframeEnabled; // ivar: _daVinciTintBandStrokeWireframeEnabled
@property (nonatomic) BOOL daVinciTintLODLevels; // ivar: _daVinciTintLODLevels
@property (nonatomic) float daVinciTransitionDuration; // ivar: _daVinciTransitionDuration
@property (nonatomic) BOOL daVinciUseCollisionMesh; // ivar: _daVinciUseCollisionMesh
@property (nonatomic) BOOL daVinciVarianceShadowsEnabled; // ivar: _daVinciVarianceShadowsEnabled
@property (nonatomic) BOOL daVinciWaterDepthCueingEnabled; // ivar: _daVinciWaterDepthCueingEnabled
@property (nonatomic) BOOL daVinciWaterEnabled; // ivar: _daVinciWaterEnabled
@property (nonatomic) BOOL daVinciWaterRefractionEnabled; // ivar: _daVinciWaterRefractionEnabled
@property (nonatomic) float daVinciWaterTurbidity; // ivar: _daVinciWaterTurbidity
@property (nonatomic) BOOL daVinciWireframeEnabled; // ivar: _daVinciWireframeEnabled
@property (nonatomic) BOOL debugCaptureNextGPUFrame; // ivar: _debugCaptureNextGPUFrame
@property (copy, nonatomic) NSString *debugGPUFrameCaptureURL; // ivar: _debugGPUFrameCaptureURL
@property (nonatomic) int debugOverlayOffsetX; // ivar: _debugOverlayOffsetX
@property (nonatomic) int debugOverlayOffsetY; // ivar: _debugOverlayOffsetY
@property (nonatomic) float defaultFovLandscape; // ivar: _defaultFovLandscape
@property (nonatomic) float defaultFovPortrait; // ivar: _defaultFovPortrait
@property (nonatomic) BOOL disableBackgroundLabelLayout; // ivar: _disableBackgroundLabelLayout
@property (nonatomic) BOOL disableBuildingFootprints; // ivar: _disableBuildingFootprints
@property (nonatomic) BOOL disableContinuousMultiSectionRoutes; // ivar: _disableContinuousMultiSectionRoutes
@property (nonatomic) BOOL disableIconTextureAtlas; // ivar: _disableIconTextureAtlas
@property (nonatomic) BOOL disableIntraLinkTransitLineCrossings; // ivar: _disableIntraLinkTransitLineCrossings
@property (nonatomic) BOOL disableOverlayTextConsole; // ivar: _disableOverlayTextConsole
@property (nonatomic) BOOL disableRoadSignLimit; // ivar: _disableRoadSignLimit
@property (nonatomic) BOOL disableRoute; // ivar: _disableRoute
@property (nonatomic) BOOL disableRouteAnnotationLimit; // ivar: _disableRouteAnnotationLimit
@property (nonatomic) BOOL disableStylesheetAnimations; // ivar: _disableStylesheetAnimations
@property (nonatomic) BOOL disableTransitLineDrawing; // ivar: _disableTransitLineDrawing
@property (nonatomic) BOOL disableTransitLineGroupMerging; // ivar: _disableTransitLineGroupMerging
@property (nonatomic) BOOL disableTransitLineMerging; // ivar: _disableTransitLineMerging
@property (nonatomic) BOOL displayTextureAtlas; // ivar: _displayTextureAtlas
@property (nonatomic) float dofStrength; // ivar: _dofStrength
@property (nonatomic) BOOL dontMapMatchToSnappedRouteLine; // ivar: _dontMapMatchToSnappedRouteLine
@property (nonatomic) BOOL dontMatchRouteLine; // ivar: _dontMatchRouteLine
@property (nonatomic) BOOL dontVerifyRouteToTransitSnapping; // ivar: _dontVerifyRouteToTransitSnapping
@property (nonatomic) BOOL drawDaVinciElevationScalingDebug; // ivar: _drawDaVinciElevationScalingDebug
@property (nonatomic) BOOL drawDaVinciHUD; // ivar: _drawDaVinciHUD
@property (nonatomic) BOOL drawDebugTransit; // ivar: _drawDebugTransit
@property (nonatomic) BOOL drawPerformanceHUD; // ivar: _drawPerformanceHUD
@property (nonatomic) BOOL dumpRouteAndPath; // ivar: _dumpRouteAndPath
@property (nonatomic) BOOL dumpTransitTileContents; // ivar: _dumpTransitTileContents
@property (nonatomic) BOOL enable3DPuck; // ivar: _enable3DPuck
@property (nonatomic) BOOL enableARCameraDebugOverlay; // ivar: _enableARCameraDebugOverlay
@property (nonatomic) BOOL enableARDebugConsole; // ivar: _enableARDebugConsole
@property (nonatomic) BOOL enableAROmniTileLoader; // ivar: _enableAROmniTileLoader
@property (nonatomic) BOOL enableAntialiasing; // ivar: _enableAntialiasing
@property (nonatomic) BOOL enableDOF; // ivar: _enableDOF
@property (nonatomic) BOOL enableDaVinciStyleRoute; // ivar: _enableDaVinciStyleRoute
@property (nonatomic) BOOL enableDitherTransparency; // ivar: _enableDitherTransparency
@property (nonatomic) BOOL enableDynamicRouteWidth; // ivar: _enableDynamicRouteWidth
@property (nonatomic) BOOL enableEtaLabelDebugging; // ivar: _enableEtaLabelDebugging
@property (nonatomic) BOOL enableEtaLabelRectDebugging; // ivar: _enableEtaLabelRectDebugging
@property (nonatomic) BOOL enableInjectedAssets; // ivar: _enableInjectedAssets
@property (nonatomic) BOOL enableLabelAnimationTuning; // ivar: _enableLabelAnimationTuning
@property (nonatomic) BOOL enableLoggingInLockScreen; // ivar: _enableLoggingInLockScreen
@property (nonatomic) BOOL enableMipMaps; // ivar: _enableMipMaps
@property (nonatomic) BOOL enableMuninMiniMapCollectionPoints; // ivar: _enableMuninMiniMapCollectionPoints
@property (nonatomic) BOOL enableMuninMiniMapComposedEdgeRoadColoring; // ivar: _enableMuninMiniMapComposedEdgeRoadColoring
@property (nonatomic) BOOL enableMuninMiniMapRoadWidths; // ivar: _enableMuninMiniMapRoadWidths
@property (nonatomic) BOOL enableMuninMiniMapRoadZData; // ivar: _enableMuninMiniMapRoadZData
@property (nonatomic) BOOL enableMuninRoadNetworkMiniMap; // ivar: _enableMuninRoadNetworkMiniMap
@property (nonatomic) BOOL enableNavRoadSignOrientationDebugging; // ivar: _enableNavRoadSignOrientationDebugging
@property (nonatomic) BOOL enablePuckRouteLineSnapping; // ivar: _enablePuckRouteLineSnapping
@property (nonatomic) BOOL enableRoadSignArtworkDebugging; // ivar: _enableRoadSignArtworkDebugging
@property (nonatomic) BOOL enableRouteIntersectionTesting; // ivar: _enableRouteIntersectionTesting
@property (nonatomic) BOOL enableRouteLineLabelingDebugging; // ivar: _enableRouteLineLabelingDebugging
@property (nonatomic) BOOL enableRouteShareSectionDebugging; // ivar: _enableRouteShareSectionDebugging
@property (nonatomic) BOOL enableSignPostEvents; // ivar: _enableSignPostEvents
@property (nonatomic) BOOL enableTileClipping; // ivar: _enableTileClipping
@property (nonatomic) BOOL enableTileClippingDebug; // ivar: _enableTileClippingDebug
@property (nonatomic) BOOL enableTrafficFeatureLabelDebugging; // ivar: _enableTrafficFeatureLabelDebugging
@property (nonatomic) BOOL enableWindshieldOverrideButton; // ivar: _enableWindshieldOverrideButton
@property (nonatomic) unsigned int etaLabelDebugOrientationMask; // ivar: _etaLabelDebugOrientationMask
@property (nonatomic) NSUInteger etaLabelDebugScore; // ivar: _etaLabelDebugScore
@property (nonatomic) BOOL etaLabelsAvoidScreenEdges; // ivar: _etaLabelsAvoidScreenEdges
@property (nonatomic) BOOL expandedPerformanceHUD; // ivar: _expandedPerformanceHUD
@property (nonatomic) float farClipPlaneFactor; // ivar: _farClipPlaneFactor
@property (nonatomic) BOOL forceBumpAll; // ivar: _forceBumpAll
@property (nonatomic) BOOL forceBumpNextTap; // ivar: _forceBumpNextTap
@property (nonatomic) BOOL forceEtaLabelPlacement; // ivar: _forceEtaLabelPlacement
@property (nonatomic) BOOL hideAssetsOnCollision; // ivar: _hideAssetsOnCollision
@property (nonatomic) BOOL hideBuildingsOnCollision; // ivar: _hideBuildingsOnCollision
@property (nonatomic) BOOL hideDirectionalArrows; // ivar: _hideDirectionalArrows
@property (nonatomic) BOOL highlightRouteLineSnappingStatus; // ivar: _highlightRouteLineSnappingStatus
@property (nonatomic) BOOL highlightUndergroundRouteGeometry; // ivar: _highlightUndergroundRouteGeometry
@property (nonatomic) BOOL holdOntoStyleAttributes; // ivar: _holdOntoStyleAttributes
@property (nonatomic) unsigned char intermediateLodOverride; // ivar: _intermediateLodOverride
@property (nonatomic) BOOL isInstalledInLockScreen; // ivar: _isInstalledInLockScreen
@property (nonatomic) BOOL labelAllowDefaultIcon; // ivar: _labelAllowDefaultIcon
@property (nonatomic) BOOL labelAllowDefaultStyle; // ivar: _labelAllowDefaultStyle
@property (nonatomic) NSUInteger labelAnimationTuningElement; // ivar: _labelAnimationTuningElement
@property (nonatomic) BOOL labelAutoOffsetRoadText; // ivar: _labelAutoOffsetRoadText
@property (nonatomic) BOOL labelCollideContinuously; // ivar: _labelCollideContinuously
@property (nonatomic) BOOL labelCollisionDisabled; // ivar: _labelCollisionDisabled
@property (nonatomic) BOOL labelDedupingDisabled; // ivar: _labelDedupingDisabled
@property (nonatomic) BOOL labelFacingCullDisabled; // ivar: _labelFacingCullDisabled
@property (nonatomic) BOOL labelFlipAlternatePositionsEnable; // ivar: _labelFlipAlternatePositionsEnable
@property (nonatomic) BOOL labelHideLineFeatures; // ivar: _labelHideLineFeatures
@property (nonatomic) BOOL labelHidePhysicalFeatures; // ivar: _labelHidePhysicalFeatures
@property (nonatomic) BOOL labelHidePointFeatures; // ivar: _labelHidePointFeatures
@property (nonatomic) BOOL labelHighlighting; // ivar: _labelHighlighting
@property (nonatomic) BOOL labelHighlightingTransitFeaturesOnly; // ivar: _labelHighlightingTransitFeaturesOnly
@property (nonatomic) BOOL labelHighlightingVerboseLoggingEnabled; // ivar: _labelHighlightingVerboseLoggingEnabled
@property (nonatomic) BOOL labelOcclusionDisabled; // ivar: _labelOcclusionDisabled
@property (nonatomic) BOOL labelStyleOverridesDisabled; // ivar: _labelStyleOverridesDisabled
@property (nonatomic) BOOL labelTileDecodeEnabled; // ivar: _labelTileDecodeEnabled
@property (nonatomic) BOOL labelTransitLineCollisionEnabled; // ivar: _labelTransitLineCollisionEnabled
@property (nonatomic) BOOL labelUpdateMapTilesContinuously; // ivar: _labelUpdateMapTilesContinuously
@property (nonatomic) unsigned char labelerOutputIndex; // ivar: _labelerOutputIndex
@property (nonatomic) ? landmark2DStrokeSettings; // ivar: _landmark2DStrokeSettings
@property (nonatomic) BOOL layoutContinuously; // ivar: _layoutContinuously
@property (nonatomic) BOOL lightingAccelerateTime; // ivar: _lightingAccelerateTime
@property (nonatomic) BOOL lightingCameraLocalTime; // ivar: _lightingCameraLocalTime
@property (nonatomic) BOOL lightingEnableAmbient; // ivar: _lightingEnableAmbient
@property (nonatomic) BOOL lightingEnableLight1; // ivar: _lightingEnableLight1
@property (nonatomic) BOOL lightingEnableLight2; // ivar: _lightingEnableLight2
@property (nonatomic) BOOL lightingEnableLight3; // ivar: _lightingEnableLight3
@property (nonatomic) BOOL lightingOverrideAmbient; // ivar: _lightingOverrideAmbient
@property (nonatomic) BOOL lightingOverrideLight1; // ivar: _lightingOverrideLight1
@property (nonatomic) BOOL lightingOverrideLight2; // ivar: _lightingOverrideLight2
@property (nonatomic) BOOL lightingOverrideLight3; // ivar: _lightingOverrideLight3
@property (nonatomic) BOOL loadGreenTraffic; // ivar: _loadGreenTraffic
@property (nonatomic) BOOL lockLabelHighlighting; // ivar: _lockLabelHighlighting
@property (nonatomic) unsigned char lodOverride; // ivar: _lodOverride
@property (nonatomic) NSUInteger mapDisplayStyleOverride; // ivar: _mapDisplayStyleOverride
@property (nonatomic) float maxElevatedStrokeWidth; // ivar: _maxElevatedStrokeWidth
@property (nonatomic) float maxFovLandscape; // ivar: _maxFovLandscape
@property (nonatomic) float maxFovPortrait; // ivar: _maxFovPortrait
@property (nonatomic) float maxFovSpring; // ivar: _maxFovSpring
@property (nonatomic) float minFov; // ivar: _minFov
@property (nonatomic) float minFovSpring; // ivar: _minFovSpring
@property (nonatomic) NSUInteger muninAvailabilityOverride; // ivar: _muninAvailabilityOverride
@property (nonatomic) float muninCameraPanOffset; // ivar: _muninCameraPanOffset
@property (nonatomic) BOOL muninDebugLayer; // ivar: _muninDebugLayer
@property (nonatomic) BOOL muninGraphConnections; // ivar: _muninGraphConnections
@property (nonatomic) BOOL muninIgnorePlacesMetadata; // ivar: _muninIgnorePlacesMetadata
@property (nonatomic) NSUInteger muninIntermediatePointStep; // ivar: _muninIntermediatePointStep
@property (nonatomic) BOOL muninOverrideFov; // ivar: _muninOverrideFov
@property (nonatomic) BOOL muninOverrideParallax; // ivar: _muninOverrideParallax
@property (nonatomic) float muninParallaxDamper; // ivar: _muninParallaxDamper
@property (nonatomic) float muninParallaxScale; // ivar: _muninParallaxScale
@property (nonatomic) float muninParallaxSpring; // ivar: _muninParallaxSpring
@property (nonatomic) BOOL muninReplayLastTap; // ivar: _muninReplayLastTap
@property (nonatomic) float muninRoadNetworkMiniMapAreaInMeters; // ivar: _muninRoadNetworkMiniMapAreaInMeters
@property (nonatomic) BOOL muninShowRigTransitionInfo; // ivar: _muninShowRigTransitionInfo
@property (nonatomic) BOOL muninSlowMotion; // ivar: _muninSlowMotion
@property (nonatomic) ? muninTapState; // ivar: _muninTapState
@property (nonatomic) float muninTransitionMaxResolution; // ivar: _muninTransitionMaxResolution
@property (nonatomic) float muninTransitionMinResolution; // ivar: _muninTransitionMinResolution
@property (nonatomic) BOOL navCameraForceComplexIntersection; // ivar: _navCameraForceComplexIntersection
@property (nonatomic) NSUInteger navDisplayRate; // ivar: _navDisplayRate
@property (nonatomic) ? overrideAmbient; // ivar: _overrideAmbient
@property (nonatomic) BOOL overrideIntermediateLod; // ivar: _overrideIntermediateLod
@property (nonatomic) ? overrideLight1; // ivar: _overrideLight1
@property (nonatomic) float overrideLight1Altitude; // ivar: _overrideLight1Altitude
@property (nonatomic) float overrideLight1Azimuth; // ivar: _overrideLight1Azimuth
@property (nonatomic) ? overrideLight2; // ivar: _overrideLight2
@property (nonatomic) float overrideLight2Altitude; // ivar: _overrideLight2Altitude
@property (nonatomic) float overrideLight2Azimuth; // ivar: _overrideLight2Azimuth
@property (nonatomic) ? overrideLight3; // ivar: _overrideLight3
@property (nonatomic) float overrideLight3Altitude; // ivar: _overrideLight3Altitude
@property (nonatomic) float overrideLight3Azimuth; // ivar: _overrideLight3Azimuth
@property (nonatomic) BOOL overrideLod; // ivar: _overrideLod
@property (nonatomic) BOOL paintBuildings; // ivar: _paintBuildings
@property (nonatomic) BOOL paintCoastlines; // ivar: _paintCoastlines
@property (nonatomic) BOOL paintDaVinciBuildingTiles; // ivar: _paintDaVinciBuildingTiles
@property (nonatomic) BOOL paintDaVinciDecalBounds; // ivar: _paintDaVinciDecalBounds
@property (nonatomic) BOOL paintDaVinciElevationRaster; // ivar: _paintDaVinciElevationRaster
@property (nonatomic) BOOL paintDaVinciMeshBounds; // ivar: _paintDaVinciMeshBounds
@property (nonatomic) BOOL paintDaVinciMetaTiles; // ivar: _paintDaVinciMetaTiles
@property (nonatomic) BOOL paintDaVinciTileBoundaryVerts; // ivar: _paintDaVinciTileBoundaryVerts
@property (nonatomic) BOOL paintDaVinciTiles; // ivar: _paintDaVinciTiles
@property (nonatomic) BOOL paintDrapedPolygons; // ivar: _paintDrapedPolygons
@property (nonatomic) BOOL paintJunctions; // ivar: _paintJunctions
@property (nonatomic) BOOL paintKeysInView; // ivar: _paintKeysInView
@property (nonatomic) BOOL paintLabelBounds; // ivar: _paintLabelBounds
@property (nonatomic) BOOL paintLabelCollisionLines; // ivar: _paintLabelCollisionLines
@property (nonatomic) BOOL paintLabelCounts; // ivar: _paintLabelCounts
@property (nonatomic) BOOL paintLabelRoadFeatures; // ivar: _paintLabelRoadFeatures
@property (nonatomic) BOOL paintLandcoverTiles; // ivar: _paintLandcoverTiles
@property (nonatomic) BOOL paintLoadReason; // ivar: _paintLoadReason
@property (nonatomic) BOOL paintMapTiles; // ivar: _paintMapTiles
@property (nonatomic) BOOL paintOverlayFoundationAssociation; // ivar: _paintOverlayFoundationAssociation
@property (nonatomic) BOOL paintPoiTiles; // ivar: _paintPoiTiles
@property (nonatomic) BOOL paintPointTiles; // ivar: _paintPointTiles
@property (nonatomic) BOOL paintPolygonLayerData; // ivar: _paintPolygonLayerData
@property (nonatomic) BOOL paintPolygonTiles; // ivar: _paintPolygonTiles
@property (nonatomic) BOOL paintRoadBoundaries; // ivar: _paintRoadBoundaries
@property (nonatomic) BOOL paintRoadSigns; // ivar: _paintRoadSigns
@property (nonatomic) BOOL paintRoadTileData; // ivar: _paintRoadTileData
@property (nonatomic) BOOL paintRoadTiles; // ivar: _paintRoadTiles
@property (nonatomic) BOOL paintRoadsStitchedByName; // ivar: _paintRoadsStitchedByName
@property (nonatomic) BOOL paintSelectedMapTiles; // ivar: _paintSelectedMapTiles
@property (nonatomic) BOOL paintStandardLabelMapData; // ivar: _paintStandardLabelMapData
@property (nonatomic) BOOL paintTiles; // ivar: _paintTiles
@property (nonatomic) BOOL paintTransitCounts; // ivar: _paintTransitCounts
@property (nonatomic) BOOL paintVenues; // ivar: _paintVenues
@property (nonatomic) BOOL paintVertices; // ivar: _paintVertices
@property (readonly, nonatomic) BOOL preserveModelTile;
@property (nonatomic) BOOL prioritizeTrafficSkeleton; // ivar: _prioritizeTrafficSkeleton
@property (nonatomic) BOOL realisticWireframeEnabled; // ivar: _realisticWireframeEnabled
@property (nonatomic) BOOL relaxTiltLimits; // ivar: _relaxTiltLimits
@property (nonatomic) float ribbonCrispness; // ivar: _ribbonCrispness
@property (nonatomic) NSUInteger routeDebugPoints; // ivar: _routeDebugPoints
@property (nonatomic) float routeIsCoveredAnimationTime; // ivar: _routeIsCoveredAnimationTime
@property (nonatomic) float routeLineMaskAlphaFalloff; // ivar: _routeLineMaskAlphaFalloff
@property (nonatomic) float routeLineMaskWidth; // ivar: _routeLineMaskWidth
@property (nonatomic) float routeTrafficTransitionDistance; // ivar: _routeTrafficTransitionDistance
@property (nonatomic) float routeWidthEndTransitionDistance; // ivar: _routeWidthEndTransitionDistance
@property (nonatomic) float routeWidthStartTransitionDistance; // ivar: _routeWidthStartTransitionDistance
@property (nonatomic) float routeWindshieldAnimationTime; // ivar: _routeWindshieldAnimationTime
@property (nonatomic) float sdfGlyphShaderUpscaleFactor; // ivar: _sdfGlyphShaderUpscaleFactor
@property (nonatomic) float sdfGlyphSuperSampleKernelSize; // ivar: _sdfGlyphSuperSampleKernelSize
@property (nonatomic) GEOTileSetRegion selectedMapTilesToPaint; // ivar: _selectedMapTilesToPaint
@property (nonatomic) NSInteger shadowMapResolution; // ivar: _shadowMapResolution
@property (nonatomic) BOOL shouldForceWindshieldMode; // ivar: _shouldForceWindshieldMode
@property (nonatomic) BOOL shouldFreezeLayoutCamera; // ivar: _shouldFreezeLayoutCamera
@property (nonatomic) BOOL shouldOverrideSuperSampleKernelSize; // ivar: shouldOverrideSuperSampleKernelSize
@property (nonatomic) BOOL shouldOverrideUpscaleFactor; // ivar: _shouldOverrideUpscaleFactor
@property (nonatomic) BOOL shouldUseSDFGlyphs; // ivar: _shouldUseSDFGlyphs
@property (nonatomic) BOOL shouldUseSDFSuperSampling; // ivar: _shouldUseSDFSuperSampling
@property (nonatomic) BOOL shouldUseTestTileLoader; // ivar: _shouldUseTestTileLoader
@property (nonatomic) BOOL showClientStyleAttributes; // ivar: _showClientStyleAttributes
@property (nonatomic) BOOL showFlexZoneRanges; // ivar: _showFlexZoneRanges
@property (nonatomic) BOOL showGRLDebugInfo; // ivar: _showGRLDebugInfo
@property (nonatomic) BOOL showLabelsNavState; // ivar: _showLabelsNavState
@property (nonatomic) BOOL showManeuverPoints; // ivar: _showManeuverPoints
@property (nonatomic) BOOL showNavCameraDebugConsole; // ivar: _showNavCameraDebugConsole
@property (nonatomic) BOOL showNavCameraDebugConsoleAttributes; // ivar: _showNavCameraDebugConsoleAttributes
@property (nonatomic) BOOL showNavCameraDebugConsoleProperties; // ivar: _showNavCameraDebugConsoleProperties
@property (nonatomic) BOOL showNavCameraDebugLegend; // ivar: _showNavCameraDebugLegend
@property (nonatomic) BOOL showNavCameraDebugOverlay; // ivar: _showNavCameraDebugOverlay
@property (nonatomic) BOOL showNavLabelOverlay; // ivar: _showNavLabelOverlay
@property (nonatomic) BOOL showNavLabelRouteAvoidanceOverlay; // ivar: _showNavLabelRouteAvoidanceOverlay
@property (nonatomic) BOOL showRoutelineAnimation; // ivar: _showRoutelineAnimation
@property (nonatomic) BOOL showStaticRouteWidth; // ivar: _showStaticRouteWidth
@property (nonatomic) BOOL showTrafficCasing; // ivar: _showTrafficCasing
@property (nonatomic) BOOL showTrafficOffset; // ivar: _showTrafficOffset
@property (nonatomic) BOOL slowAnimations; // ivar: _slowAnimations
@property (nonatomic) BOOL slowMotionBump; // ivar: _slowMotionBump
@property (nonatomic) BOOL slowTransitions; // ivar: _slowTransitions
@property (nonatomic) BOOL textlessPOIsEnabled; // ivar: _textlessPOIsEnabled
@property (nonatomic) float textlessPOIsMinZoom; // ivar: _textlessPOIsMinZoom
@property (nonatomic) unsigned char textureAtlasIndex; // ivar: _textureAtlasIndex
@property (nonatomic) unsigned short textureAtlasPageIndex; // ivar: _textureAtlasPageIndex
@property (nonatomic) BOOL texturedTrafficCasing; // ivar: _texturedTrafficCasing
@property (nonatomic) BOOL traceEtaDebugLog; // ivar: _traceEtaDebugLog
@property (nonatomic) BOOL trackingCameraZoomFurther; // ivar: _trackingCameraZoomFurther
@property (nonatomic) BOOL transitHighlighting; // ivar: _transitHighlighting
@property (readonly, nonatomic) float transitionTimeMultiplier;
@property (nonatomic) BOOL tuneForwardLabelAnimation; // ivar: _tuneForwardLabelAnimation
@property (nonatomic) BOOL useBuildingShadowTexture; // ivar: _useBuildingShadowTexture
@property (nonatomic) BOOL useMetalRenderer; // ivar: _useMetalRenderer
@property (nonatomic) BOOL useStaticTrafficFeed; // ivar: _useStaticTrafficFeed


+(id)keyPathsForValuesAffectingPreserveModelTile;
+(id)sharedSettings;
-(BOOL)isLogicConsoleEnabled:(NSUInteger)arg0 ;
-(BOOL)isPerformanceGroupShown:(unsigned int)arg0 ;
-(BOOL)overlaysShouldDrawDebug;
-(BOOL)shouldDrawDebug;
-(id)init;
-(id)nameForPerformanceGroup:(unsigned int)arg0 ;
-(struct ? *)displayStyleOverride;
-(struct VKDebugLabelAnimationParameters *)hideLabelAnimationParams;
-(struct VKDebugLabelAnimationParameters *)showLabelAnimationParams;
-(unsigned int)numPerformanceGroups;
-(void)addTileToPaint:(struct GEOTileSetRegion )arg0 ;
-(void)hidePerformanceGroup:(unsigned int)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeTileToPaint;
-(void)setArDebugElevationOffset:(float)arg0 ;
-(void)setHighlightRouteLineSnappingRegion:(BOOL)arg0 ;
-(void)setLogicConsole:(NSUInteger)arg0 enabled:(BOOL)arg1 ;
-(void)showPerformanceGroup:(unsigned int)arg0 ;


@end


#endif