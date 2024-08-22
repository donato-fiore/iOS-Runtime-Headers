// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSULAYERSAVERESTORE_H
#define TSULAYERSAVERESTORE_H


#import <Foundation/Foundation.h>

#import "TSURetainedPointerKeyDictionary.h"

@interface TSULayerSaveRestore : NSObject

@property (retain, nonatomic) TSURetainedPointerKeyDictionary *layerStates; // ivar: _layerStates


-(BOOL)restoreLayer:(id)arg0 ;
-(id)objectForLayer:(id)arg0 key:(id)arg1 ;
-(void)dealloc;
-(void)saveLayer:(id)arg0 ;


@end


#endif