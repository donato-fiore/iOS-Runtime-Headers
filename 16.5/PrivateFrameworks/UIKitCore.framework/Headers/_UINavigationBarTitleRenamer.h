// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLERENAMER_H
#define _UINAVIGATIONBARTITLERENAMER_H

@class NSMutableSet;
@protocol _UINavigationBarTitleRenamerDelegate;

#import <Foundation/Foundation.h>


@interface _UINavigationBarTitleRenamer : NSObject {
    ? _flags;
}


@property (weak, nonatomic) NSObject<_UINavigationBarTitleRenamerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableSet *trackedSessions; // ivar: _trackedSessions


+(id)renameServer;
-(BOOL)_session:(id)arg0 textFieldShouldEndRenamingWithTitle:(id)arg1 ;
-(id)_session:(id)arg0 textFieldWillBeginRenamingWithTitle:(id)arg1 selectedRange:(struct _NSRange *)arg2 ;
-(id)description;
-(id)init;
-(id)sessionWithIdentifier:(id)arg0 ;
-(void)_sessionDidCancel:(id)arg0 ;
-(void)_sessionTextFieldDidEndEditing:(id)arg0 ;
-(void)endSession:(id)arg0 ;
-(void)startSession:(id)arg0 ;


@end


#endif