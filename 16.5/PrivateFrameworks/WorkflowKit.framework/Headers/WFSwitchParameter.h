// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSWITCHPARAMETER_H
#define WFSWITCHPARAMETER_H

@class NSString;


#import "WFParameter.h"

@interface WFSwitchParameter : WFParameter

@property (readonly, nonatomic) NSString *localizedOffDisplayName; // ivar: _localizedOffDisplayName
@property (readonly, nonatomic) NSString *localizedOnDisplayName; // ivar: _localizedOnDisplayName
@property (readonly, nonatomic) NSString *offDisplayName;
@property (readonly, nonatomic) NSString *onDisplayName;


+(id)defaultOffDisplayName;
+(id)defaultOnDisplayName;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif