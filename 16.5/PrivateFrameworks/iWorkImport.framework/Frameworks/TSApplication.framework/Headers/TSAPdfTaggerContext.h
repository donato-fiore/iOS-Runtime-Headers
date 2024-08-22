// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAPDFTAGGERCONTEXT_H
#define TSAPDFTAGGERCONTEXT_H


#import <Foundation/Foundation.h>

#import "TSAPdfTaggerState.h"

@interface TSAPdfTaggerContext : NSObject

@property (readonly, nonatomic) TSAPdfTaggerState *taggerState; // ivar: _taggerState


-(id)initWithStateOfTagger:(id)arg0 ;


@end


#endif