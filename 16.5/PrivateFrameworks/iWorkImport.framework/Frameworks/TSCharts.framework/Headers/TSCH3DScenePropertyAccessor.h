// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSCENEPROPERTYACCESSOR_H
#define TSCH3DSCENEPROPERTYACCESSOR_H


#import <Foundation/Foundation.h>

#import "TSCH3DScene.h"

@interface TSCH3DScenePropertyAccessor : NSObject

@property (readonly, weak, nonatomic) TSCH3DScene *scene; // ivar: _scene


+(id)accessorWithScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;


@end


#endif