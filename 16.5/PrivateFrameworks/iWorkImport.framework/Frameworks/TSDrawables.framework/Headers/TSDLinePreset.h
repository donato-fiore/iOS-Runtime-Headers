// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDLINEPRESET_H
#define TSDLINEPRESET_H


#import <Foundation/Foundation.h>

#import "TSDLineEnd.h"
#import "TSDStroke.h"

@interface TSDLinePreset : NSObject

@property (readonly, copy, nonatomic) TSDLineEnd *headLineEnd; // ivar: _headLineEnd
@property (readonly, copy, nonatomic) TSDStroke *stroke; // ivar: _stroke
@property (readonly, copy, nonatomic) TSDLineEnd *tailLineEnd; // ivar: _tailLineEnd


+(id)lineWithStroke:(id)arg0 headLineEnd:(id)arg1 tailLineEnd:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithStroke:(id)arg0 headLineEnd:(id)arg1 tailLineEnd:(id)arg2 ;


@end


#endif