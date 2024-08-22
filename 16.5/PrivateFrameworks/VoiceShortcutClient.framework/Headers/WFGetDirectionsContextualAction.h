// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGETDIRECTIONSCONTEXTUALACTION_H
#define WFGETDIRECTIONSCONTEXTUALACTION_H

@class CLLocation, NSString;


#import "WFContextualAction.h"

@interface WFGetDirectionsContextualAction : WFContextualAction

@property (readonly, nonatomic) CLLocation *destination; // ivar: _destination
@property (readonly, copy, nonatomic) NSString *destinationName; // ivar: _destinationName
@property (readonly, nonatomic) NSUInteger navigationType; // ivar: _navigationType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsUserInterfaceWhenRunning;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(id)arg0 name:(id)arg1 type:(NSUInteger)arg2 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif