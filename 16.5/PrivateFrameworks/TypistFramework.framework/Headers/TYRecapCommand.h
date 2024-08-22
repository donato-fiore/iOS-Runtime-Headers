// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYRECAPCOMMAND_H
#define TYRECAPCOMMAND_H

@class NSString, RCPSyntheticEventStream;

#import <Foundation/Foundation.h>


@interface TYRecapCommand : NSObject

@property (retain, nonatomic) NSString *commandDescription; // ivar: _commandDescription
@property (retain, nonatomic) NSString *commandString; // ivar: _commandString
@property (nonatomic) int commandType; // ivar: _commandType
@property (retain, nonatomic) RCPSyntheticEventStream *eventStream; // ivar: _eventStream
@property (nonatomic) CGFloat recapWaitOverrideInterval; // ivar: _recapWaitOverrideInterval
@property (nonatomic) BOOL requiresRecapWaitOverride; // ivar: _requiresRecapWaitOverride


-(id)description;
-(id)initWithCommandType:(int)arg0 commandString:(id)arg1 commandDescription:(id)arg2 ;
-(void)updateCommand:(int)arg0 commandString:(id)arg1 commandDescription:(id)arg2 ;


@end


#endif