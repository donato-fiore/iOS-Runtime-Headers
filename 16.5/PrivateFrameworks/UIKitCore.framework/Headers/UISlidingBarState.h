// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISLIDINGBARSTATE_H
#define UISLIDINGBARSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UISlidingBarConfiguration.h"

@interface UISlidingBarState : NSObject <NSCopying>



@property (nonatomic, setter=_setCollapsedState:) NSInteger _collapsedState; // ivar: __collapsedState
@property (nonatomic) CGFloat _keyboardAdjustment; // ivar: __keyboardAdjustment
@property (nonatomic, setter=_setLeadingOverlayWidth:) CGFloat _leadingOverlayWidth; // ivar: __leadingOverlayWidth
@property (nonatomic) CGFloat _rubberBandInset; // ivar: __rubberBandInset
@property (nonatomic, setter=_setSupplementaryOverlayWidth:) CGFloat _supplementaryOverlayWidth; // ivar: __supplementaryOverlayWidth
@property (nonatomic, setter=_setTrailingOverlayWidth:) CGFloat _trailingOverlayWidth; // ivar: __trailingOverlayWidth
@property (nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) BOOL _treatLeadingHiddenAsOverlaps; // ivar: __treatLeadingHiddenAsOverlaps
@property (nonatomic, setter=_setTreatSupplementaryHiddenAsOverlaps:) BOOL _treatSupplementaryHiddenAsOverlaps; // ivar: __treatSupplementaryHiddenAsOverlaps
@property (nonatomic, setter=_setTreatTrailingHiddenAsOverlaps:) BOOL _treatTrailingHiddenAsOverlaps; // ivar: __treatTrailingHiddenAsOverlaps
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (retain, nonatomic) UISlidingBarConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) BOOL isLeadingVisible;
@property (readonly, nonatomic) BOOL isSupplementaryVisible;
@property (readonly, nonatomic) BOOL isTrailingVisible;
@property (nonatomic) CGFloat leadingDragOffset; // ivar: _leadingDragOffset
@property (nonatomic) CGFloat leadingOffscreenWidth; // ivar: _leadingOffscreenWidth
@property (readonly, nonatomic) BOOL leadingOverlapsMain;
@property (nonatomic) CGFloat leadingWidth; // ivar: _leadingWidth
@property (nonatomic) CGFloat mainWidth; // ivar: _mainWidth
@property (nonatomic) CGFloat supplementaryDragOffset; // ivar: _supplementaryDragOffset
@property (nonatomic) CGFloat supplementaryOffscreenWidth; // ivar: _supplementaryOffscreenWidth
@property (readonly, nonatomic) BOOL supplementaryOverlapsMain;
@property (nonatomic) CGFloat supplementaryWidth; // ivar: _supplementaryWidth
@property (nonatomic) CGFloat trailingDragOffset; // ivar: _trailingDragOffset
@property (nonatomic) CGFloat trailingOffscreenWidth; // ivar: _trailingOffscreenWidth
@property (readonly, nonatomic) BOOL trailingOverlapsMain;
@property (nonatomic) CGFloat trailingWidth; // ivar: _trailingWidth


-(BOOL)_leadingEntirelyOverlapsMain;
-(BOOL)_shouldUseSlidingBars;
-(BOOL)_supplementaryEntirelyOverlapsMain;
-(BOOL)_trailingEntirelyOverlapsMain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesRequest:(id)arg0 ;
-(CGFloat)_absoluteDistanceFromRequest:(id)arg0 ;
-(CGFloat)_distanceFromRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)_interactiveStateRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)stateRequest;


@end


#endif