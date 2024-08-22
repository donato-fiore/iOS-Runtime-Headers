// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIIMAGEVIEWELEMENT_H
#define SKUIIMAGEVIEWELEMENT_H

@class NSString, NSURL, UIColor;


#import "SKUIViewElement.h"
#import "SKUIImageViewElementCacheKey.h"

@interface SKUIImageViewElement : SKUIViewElement {
    NSString *_alt;
    NSString *_entityResourceName;
    NSURL *_entityURL;
    char _enabled;
    BOOL _hasValidEntityValues;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    CGSize _size;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (nonatomic) CGSize layerShadowOffset; // ivar: _layerShadowOffset
@property (nonatomic) float layerShadowOpacity; // ivar: _layerShadowOpacity
@property (nonatomic) CGFloat layerShadowRadius; // ivar: _layerShadowRadius
@property (readonly, nonatomic) id *resourceCacheKey;
@property (readonly, nonatomic) NSString *resourceName;
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) id *transientResourceCacheKey; // ivar: _transientResourceCacheKey


-(BOOL)isEnabled;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(NSInteger)pageComponentType;
-(id)accessibilityText;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)entityValueProperties;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)uniquingMapKey;
-(void)_loadEntityValuesIfNeeded;
-(void)entityValueProviderDidChange;


@end


#endif