// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISHEETPRESENTATIONCONTROLLERCONFIGURATION_H
#define _UISHEETPRESENTATIONCONTROLLERCONFIGURATION_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UISheetPresentationControllerAppearance.h"

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding>



@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) CGFloat _cornerRadiusForPresentationAndDismissal; // ivar: __cornerRadiusForPresentationAndDismissal
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) NSInteger _detentDirectionWhenFloating; // ivar: __detentDirectionWhenFloating
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents; // ivar: __detents
@property (retain, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance; // ivar: __edgeAttachedCompactHeightAppearance
@property (retain, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance; // ivar: __floatingAppearance
@property (nonatomic, setter=_setMode:) NSInteger _mode; // ivar: __mode
@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating; // ivar: __peeksWhenFloating
@property (nonatomic, setter=_setPreferredCornerRadius:) CGFloat _preferredCornerRadius; // ivar: __preferredCornerRadius
@property (nonatomic, setter=_prefersGrabberVisible:) BOOL _prefersGrabberVisible; // ivar: __prefersGrabberVisible
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; // ivar: __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown; // ivar: __prefersScrollingResizesWhenDetentDirectionIsDown
@property (copy, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier; // ivar: __selectedDetentIdentifier
@property (retain, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance; // ivar: __standardAppearance
@property (nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) BOOL _wantsEdgeAttachedInCompactHeight; // ivar: __wantsEdgeAttachedInCompactHeight
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen; // ivar: __wantsFullScreen
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) BOOL _widthFollowsPreferredContentSizeWhenEdgeAttached; // ivar: __widthFollowsPreferredContentSizeWhenEdgeAttached


+(BOOL)supportsSecureCoding;
+(id)_fullScreenConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_prefersGrabberVisible:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif