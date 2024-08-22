// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATICBATTERYVIEW_H
#define _UISTATICBATTERYVIEW_H

@class UIBatteryView;



@interface _UIStaticBatteryView : UIBatteryView {
    NSInteger _inflightBoltAnimationCount;
}




+(id)_batteryBodyImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 batteryRect:(struct CGRect )arg2 cornerRadius:(CGFloat)arg3 lineWidth:(CGFloat)arg4 filled:(BOOL)arg5 ;
+(id)_batteryBodyImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 batteryRect:(struct CGRect )arg2 cornerRadius:(CGFloat)arg3 lineWidth:(CGFloat)arg4 withBoltCutOutOfSize:(struct CGSize )arg5 inRect:(struct CGRect )arg6 boltFlipped:(BOOL)arg7 ;
+(id)_batteryBoltImageWithSize:(struct CGSize )arg0 boltSize:(struct CGSize )arg1 forScale:(CGFloat)arg2 ;
+(id)_batteryBoltMaskImageWithSize:(struct CGSize )arg0 boltSize:(struct CGSize )arg1 forScale:(CGFloat)arg2 ;
+(id)_batteryFillImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)_batteryFillImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 withBoltCutOutOfSize:(struct CGSize )arg3 inRect:(struct CGRect )arg4 boltFlipped:(BOOL)arg5 ;
+(id)_batteryPinImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 complexPinPath:(BOOL)arg2 ;
+(id)_imageByPunchingImage:(id)arg0 inRect:(struct CGRect )arg1 flippedHorizontally:(BOOL)arg2 outOfImage:(id)arg3 inRect:(struct CGRect )arg4 size:(struct CGSize )arg5 scale:(CGFloat)arg6 ;
+(id)_imageWithRenderedBezierPath:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 pathScaleFactor:(CGFloat)arg3 stroke:(BOOL)arg4 fill:(BOOL)arg5 ;
+(id)_percentFillImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 batteryRect:(struct CGRect )arg2 cornerRadius:(CGFloat)arg3 lineWidth:(CGFloat)arg4 ;
+(id)_renderedImageOfSize:(struct CGSize )arg0 scale:(CGFloat)arg1 withActions:(id)arg2 ;
-(BOOL)_useImagesWithCutoutsForBolt;
-(CGFloat)_batteryBoltLargeScaleFactor;
-(CGFloat)_batteryBoltSmallScaleFactor;
-(CGFloat)_batteryPathScaleFactor;
-(struct CGRect )_boltRectForTraitCollection:(id)arg0 boltSize:(struct CGSize )arg1 ;
-(struct CGRect )_updateBodyLayers;
-(struct CGSize )_boltPathSize;
-(void)_createBodyLayers;
-(void)_createBoltLayersWithSize:(struct CGSize )arg0 ;
-(void)_createFillLayer;
-(void)_didFinishAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)_updateBatteryFillColor;
-(void)_updateBodyColors;
-(void)_updateFillLayer;
-(void)_willBeginAnimatingBoltToVisible:(BOOL)arg0 ;
-(void)setLowBatteryMode:(NSInteger)arg0 ;
-(void)setShowsPercentage:(BOOL)arg0 ;


@end


#endif