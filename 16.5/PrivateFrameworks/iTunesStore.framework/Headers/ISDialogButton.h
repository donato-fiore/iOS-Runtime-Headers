// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDIALOGBUTTON_H
#define ISDIALOGBUTTON_H

@class NSString, NSDictionary;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface ISDialogButton : NSObject <SSXPCCoding>



@property int actionType; // ivar: _actionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (retain) id *parameter; // ivar: _parameter
@property (readonly) BOOL shouldContinueTouchIDSession; // ivar: _tidContinue
@property (copy) NSString *subtarget; // ivar: _subtarget
@property (readonly) Class superclass;
@property NSInteger tag; // ivar: _tag
@property (retain) NSString *title; // ivar: _title
@property NSInteger urlType; // ivar: _urlType


+(id)buttonWithTitle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 superficial:(BOOL)arg1 ;
-(NSInteger)_urlTypeForString:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)_actionTypeForString:(id)arg0 ;
-(void)_openURLWithRequest:(id)arg0 ;
-(void)loadFromDictionary:(id)arg0 ;
-(void)performDefaultActionForDialog:(id)arg0 ;


@end


#endif