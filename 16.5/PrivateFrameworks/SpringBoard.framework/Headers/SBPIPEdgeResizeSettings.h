// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPEDGERESIZESETTINGS_H
#define SBPIPEDGERESIZESETTINGS_H

@class PTSettings;


#import "SBPIPEdgeResizeAnchorPointSettings.h"

@interface SBPIPEdgeResizeSettings : PTSettings

@property (retain, nonatomic) SBPIPEdgeResizeAnchorPointSettings *anchorPointSettings; // ivar: _anchorPointSettings
@property (nonatomic) BOOL blurNoteWhileResizing; // ivar: _blurNoteWhileResizing
@property (nonatomic) BOOL disableCornerResizeForButtons; // ivar: _disableCornerResizeForButtons
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (nonatomic) CGFloat liveResizePointerInteractionRegionCornerLength; // ivar: _liveResizePointerInteractionRegionCornerLength
@property (nonatomic) CGFloat liveResizePointerInteractionRegionInnerLength; // ivar: _liveResizePointerInteractionRegionInnerLength
@property (nonatomic) CGFloat liveResizePointerInteractionRegionOuterLength; // ivar: _liveResizePointerInteractionRegionOuterLength


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif