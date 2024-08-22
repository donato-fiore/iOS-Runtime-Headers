// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBITMAPRENDERINGQUALITYINFO_H
#define TSDBITMAPRENDERINGQUALITYINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSDBitmapRenderingQualityInfo : NSObject {
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}


@property (readonly, nonatomic) int quality; // ivar: mQuality


-(id)initWithQuality:(int)arg0 canvasScale:(float)arg1 ;
-(struct CGImage *)degradedImageRefForProvider:(id)arg0 ofSize:(struct CGSize )arg1 ;
-(void)cacheProvider:(id)arg0 ofSize:(struct CGSize )arg1 ;
-(void)dealloc;


@end


#endif