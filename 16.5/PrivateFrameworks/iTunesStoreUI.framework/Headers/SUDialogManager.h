// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUDIALOGMANAGER_H
#define SUDIALOGMANAGER_H

@class NSMutableArray, NSString;
@protocol ISSingleton;

#import <Foundation/Foundation.h>


@interface SUDialogManager : NSObject <ISSingleton>

 {
    NSMutableArray *_dialogs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfPendingDialogs;
@property (readonly) Class superclass;


+(id)newDialogWithError:(id)arg0 ;
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(BOOL)_isDisplayingEquivalentDialog:(id)arg0 ;
-(BOOL)presentDialog:(id)arg0 ;
-(BOOL)presentDialog:(id)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)presentDialogForError:(id)arg0 ;
-(BOOL)presentDialogForError:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_finishDialog:(id)arg0 withButtonIndex:(NSInteger)arg1 ;
-(void)_performDefaultActionForDialog:(id)arg0 buttonIndex:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif