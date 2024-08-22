// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSTREELOCKITEM_H
#define _UIFOCUSTREELOCKITEM_H

@class NSString, NSArray;
@protocol UIFocusEnvironment;

#import <Foundation/Foundation.h>


@interface _UIFocusTreeLockItem : NSObject {
    BOOL _didSoftAssert;
    BOOL _didCleanup;
    id<UIFocusEnvironment> *_unsafeEnvironment;
    id *_finalUnlockHandler;
}


@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) NSString *environmentDescription; // ivar: _environmentDescription
@property (readonly, nonatomic) NSArray *lockCallStackSymbols; // ivar: _lockCallStackSymbols
@property (readonly, nonatomic) NSUInteger lockCount; // ivar: _lockCount
@property (readonly, nonatomic) CGFloat lockTime; // ivar: _lockTime
@property (readonly, nonatomic) NSArray *unlockCallStackSymbols; // ivar: _unlockCallStackSymbols


-(BOOL)unlock;
-(id)description;
-(id)initWithEnvironment:(id)arg0 finalUnlockHandler:(id)arg1 ;
-(void)_cleanup:(BOOL)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)validate;


@end


#endif