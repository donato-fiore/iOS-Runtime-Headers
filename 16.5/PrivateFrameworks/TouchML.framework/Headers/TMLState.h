// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLSTATE_H
#define TMLSTATE_H

@class NSMutableDictionary, NSOrderedSet, NSString;

#import <Foundation/Foundation.h>

#import "TMLState.h"

@interface TMLState : NSObject {
    NSMutableDictionary *_properties;
    TMLState *_baseState;
}


@property (readonly, nonatomic) NSOrderedSet *propertyKeys; // ivar: _propertyKeys
@property (readonly, nonatomic) NSString *tmlStateExtends; // ivar: _tmlStateExtends
@property (readonly, nonatomic) NSString *tmlStateName; // ivar: _tmlStateName


+(Class)registerState:(id)arg0 forClass:(Class)arg1 ;
+(id)stateForClass:(Class)arg0 stateName:(id)arg1 ;
-(id)init;
-(id)initWithStateName:(id)arg0 ;
-(id)tmlIdentifier;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)applyToObject:(id)arg0 fromState:(id)arg1 ;
-(void)applyToObject:(id)arg0 ignorePropertyKeys:(id)arg1 ;
-(void)enterStateFromState:(id)arg0 ;
-(void)leaveStateToState:(id)arg0 ;
-(void)setTMLValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif