// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCOMPOUNDASSERTION_H
#define SBPIPCOMPOUNDASSERTION_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>


@interface SBPIPCompoundAssertion : NSObject {
    NSMapTable *_controllerToStashAssertionMap;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason


-(id)initWithIdentifier:(id)arg0 reason:(NSInteger)arg1 ;
-(void)addAssertionForController:(id)arg0 windowScene:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeAssertionForController:(id)arg0 ;


@end


#endif