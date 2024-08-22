// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLCONSOLECHANNEL_H
#define RWIPROTOCOLCONSOLECHANNEL_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolConsoleChannel : RWIProtocolJSONObject

@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger source;


-(id)initWithSource:(NSInteger)arg0 level:(NSInteger)arg1 ;


@end


#endif