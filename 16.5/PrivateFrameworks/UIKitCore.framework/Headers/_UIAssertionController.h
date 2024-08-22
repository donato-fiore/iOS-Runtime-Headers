// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIASSERTIONCONTROLLER_H
#define _UIASSERTIONCONTROLLER_H

@class NSMutableDictionary;
@protocol _UIAssertionControllerSubject;

#import <Foundation/Foundation.h>


@interface _UIAssertionController : NSObject {
    NSMutableDictionary *_activeAssertionRecords;
}


@property (readonly, weak, nonatomic) NSObject<_UIAssertionControllerSubject> *subject; // ivar: _subject


-(BOOL)hasAssertionsOfType:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithAssertionSubject:(id)arg0 ;
-(id)vendAssertionOfType:(NSUInteger)arg0 initialState:(BOOL)arg1 ;
-(id)vendAssertionOfType:(NSUInteger)arg0 initialState:(BOOL)arg1 reason:(id)arg2 ;
-(id)vendAssertionOfType:(NSUInteger)arg0 initialState:(BOOL)arg1 reason:(id)arg2 requiresExplicitInvalidation:(BOOL)arg3 ;
-(void)_beginTrackingAssertion:(id)arg0 ;
-(void)_endTrackingAssertion:(id)arg0 ;
-(void)_enforceSubjectAwarenessOfAssertionState:(BOOL)arg0 forAssertionType:(NSUInteger)arg1 ;


@end


#endif