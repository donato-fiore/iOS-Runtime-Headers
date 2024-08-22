// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFBSSCENESUBSTRATE_H
#define _UIFBSSCENESUBSTRATE_H

@class UIContextBinderSubstrate, NSMapTable;



@interface _UIFBSSceneSubstrate : UIContextBinderSubstrate {
    NSMapTable *_sceneLayerTable;
}




-(id)initWithScene:(id)arg0 ;
-(void)attachContext:(id)arg0 ;
-(void)detachContext:(id)arg0 ;


@end


#endif