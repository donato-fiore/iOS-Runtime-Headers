// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSMARTPROMPTDATABASELOOKUPRESULT_H
#define WFSMARTPROMPTDATABASELOOKUPRESULT_H

@class NSArray, WFContentAttribution;

#import <Foundation/Foundation.h>


@interface WFSmartPromptDatabaseLookupResult : NSObject

@property (readonly, nonatomic) NSArray *allowedStates; // ivar: _allowedStates
@property (readonly, nonatomic) NSArray *deniedStates; // ivar: _deniedStates
@property (readonly, nonatomic) WFContentAttribution *previousAttribution; // ivar: _previousAttribution
@property (readonly, nonatomic) NSArray *restrictedStates; // ivar: _restrictedStates
@property (readonly, nonatomic) NSArray *undefinedStates; // ivar: _undefinedStates


-(id)initWithAllowedStates:(id)arg0 deniedStates:(id)arg1 undefinedStates:(id)arg2 ;
-(id)initWithAllowedStates:(id)arg0 deniedStates:(id)arg1 undefinedStates:(id)arg2 previousAttribution:(id)arg3 ;
-(id)initWithAllowedStates:(id)arg0 deniedStates:(id)arg1 undefinedStates:(id)arg2 restrictedStates:(id)arg3 ;
-(id)initWithAllowedStates:(id)arg0 deniedStates:(id)arg1 undefinedStates:(id)arg2 restrictedStates:(id)arg3 previousAttribution:(id)arg4 ;


@end


#endif