// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBBACKGROUNDVIEW_H
#define UIKBBACKGROUNDVIEW_H

@class NSString;
@protocol UIKBCacheableView;

#import <Foundation/Foundation.h>

#import "UIKBSplitImageView.h"
#import "UIKBTree.h"
#import "UITextInputTraits.h"
#import "UIKBRenderConfig.h"
#import "UIKBScreenTraits.h"

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView>

 {
    UIKBTree *_keyplane;
    UITextInputTraits *_inputTraits;
    int _visualStyle;
    CGRect _splitLeftRect;
    CGRect _splitLeftCacheRect;
    CGRect _splitRightRect;
    CGRect _splitRightCacheRect;
    NSUInteger _topCorners;
    BOOL _isSplit;
    BOOL _centerFilled;
    BOOL _hasCandidateKeys;
}


@property (readonly, nonatomic) NSInteger assetIdiom;
@property (readonly, nonatomic) NSInteger cacheDeferPriority;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) CGFloat cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject *geometryCacheKey; // ivar: _geometryCacheKey
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (readonly) Class superclass;


-(BOOL)_canDrawContent;
-(id)cacheKeysForRenderFlags:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)drawContentsOfRenderers:(id)arg0 ;
-(void)refreshStyleForKeyplane:(id)arg0 inputTraits:(id)arg1 ;


@end


#endif