// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONTAINERLAYOUT_H
#define TSDCONTAINERLAYOUT_H

@protocol TSDContainerInfo;


#import "TSDLayout.h"

@interface TSDContainerLayout : TSDLayout

@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;


-(id)childInfosForChildLayouts;
-(id)initWithInfo:(id)arg0 ;
-(struct CGRect )baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform )arg0 ;
-(void)processChangedProperty:(int)arg0 ;


@end


#endif