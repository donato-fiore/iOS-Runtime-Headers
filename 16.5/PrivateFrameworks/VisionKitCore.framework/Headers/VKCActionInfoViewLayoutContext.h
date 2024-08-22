// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCACTIONINFOVIEWLAYOUTCONTEXT_H
#define VKCACTIONINFOVIEWLAYOUTCONTEXT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VKCActionInfoViewLayoutContext : NSObject

@property (nonatomic) BOOL animateItemVisibilityChanges; // ivar: _animateItemVisibilityChanges
@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (nonatomic) CGFloat currentMaxX; // ivar: _currentMaxX
@property (nonatomic) CGFloat currentMinX; // ivar: _currentMinX
@property (nonatomic) BOOL didAddLeadingItem; // ivar: _didAddLeadingItem
@property (nonatomic) BOOL didAddTrailingItem; // ivar: _didAddTrailingItem
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSMutableArray *leadingLayout; // ivar: _leadingLayout
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (readonly, nonatomic) CGFloat remainingWidth;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL showingMoreButton; // ivar: _showingMoreButton
@property (retain, nonatomic) NSMutableArray *trailingLayout; // ivar: _trailingLayout
@property (nonatomic) CATransform3D transform; // ivar: _transform


-(id)init;
-(void)reset;


@end


#endif