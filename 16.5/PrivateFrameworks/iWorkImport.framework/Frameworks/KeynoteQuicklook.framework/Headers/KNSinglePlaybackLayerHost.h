// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSINGLEPLAYBACKLAYERHOST_H
#define KNSINGLEPLAYBACKLAYERHOST_H

@class CALayer, NSString;
@protocol KNPlaybackLayerHost;

#import <Foundation/Foundation.h>

#import "KNAnimationScreenEnvironment.h"

@interface KNSinglePlaybackLayerHost : NSObject <KNPlaybackLayerHost>

 {
    CALayer *_containerLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (readonly, nonatomic) KNAnimationScreenEnvironment *screenEnvironment; // ivar: _screenEnvironment
@property (readonly) Class superclass;


-(id)initWithContainerLayer:(id)arg0 screenEnvironment:(id)arg1 ;
-(struct CGRect )convertRootLayerRectToContainer:(struct CGRect )arg0 ;


@end


#endif