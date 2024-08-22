// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMAPSNAPSHOTDEBUGINFO_H
#define _UIFOCUSMAPSNAPSHOTDEBUGINFO_H


#import <Foundation/Foundation.h>

#import "_UIFocusMapSearchInfo.h"
#import "UIImage.h"
#import "_UIFocusMapSnapshot.h"

@interface _UIFocusMapSnapshotDebugInfo : NSObject

@property (readonly, weak, nonatomic) _UIFocusMapSearchInfo *focusMapSearchInfo; // ivar: _focusMapSearchInfo
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGPoint imageAnchorPoint; // ivar: _imageAnchorPoint
@property (readonly, nonatomic) _UIFocusMapSnapshot *snapshot; // ivar: _snapshot


+(id)_summaryImageForDebugInfoArray:(id)arg0 forFocusMovementWithInfo:(id)arg1 scaleFactor:(CGFloat)arg2 ;
-(id)_drawImage;
-(id)initWithSnapshot:(id)arg0 focusMapSearchInfo:(id)arg1 ;
-(struct CGRect )_rectContainingAllFocusRegions;


@end


#endif