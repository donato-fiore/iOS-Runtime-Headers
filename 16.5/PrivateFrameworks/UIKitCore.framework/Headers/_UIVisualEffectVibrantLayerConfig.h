// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTVIBRANTLAYERCONFIG_H
#define _UIVISUALEFFECTVIBRANTLAYERCONFIG_H

@class UIVisualEffectLayerConfig, NSDictionary;


#import "UIColor.h"

@interface _UIVisualEffectVibrantLayerConfig : UIVisualEffectLayerConfig

@property (readonly, copy, nonatomic) NSDictionary *filterAttributes; // ivar: _filterAttributes
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) UIColor *vibrantColor; // ivar: _vibrantColor


+(id)layerWithVibrantColor:(id)arg0 tintColor:(id)arg1 filterType:(id)arg2 ;
+(id)layerWithVibrantColor:(id)arg0 tintColor:(id)arg1 filterType:(id)arg2 filterAttributes:(id)arg3 ;
-(id)description;
-(void)configureLayerView:(id)arg0 ;
-(void)deconfigureLayerView:(id)arg0 ;


@end


#endif