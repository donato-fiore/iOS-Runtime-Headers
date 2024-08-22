// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFSALWAYSONLIVERENDERINGASSERTIONUISCENE_H
#define SBFSALWAYSONLIVERENDERINGASSERTIONUISCENE_H

@class UIScene;


#import "SBFAlwaysOnLiveRenderingSceneBLSAttributesProvider.h"

@interface SBFSAlwaysOnLiveRenderingAssertionUIScene : SBFAlwaysOnLiveRenderingSceneBLSAttributesProvider {
    UIScene *_scene;
}




-(id)assertionAttributes;
-(id)initWithScene:(id)arg0 ;


@end


#endif