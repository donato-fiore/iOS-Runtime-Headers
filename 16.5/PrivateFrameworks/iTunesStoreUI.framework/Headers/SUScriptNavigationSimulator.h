// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTNAVIGATIONSIMULATOR_H
#define SUSCRIPTNAVIGATIONSIMULATOR_H

@class WebScriptObject, NSString, NSMutableArray, UINavigationController;
@protocol UINavigationControllerDelegate;


#import "SUScriptObject.h"

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate>

 {
    WebScriptObject *_transitionCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions; // ivar: _enqueuedTransitions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger indexCount;
@property (nonatomic) NSInteger initialIndex; // ivar: _initialIndex
@property (nonatomic) NSInteger lastVisibleIndex; // ivar: _lastVisibleIndex
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;
@property (retain, nonatomic) WebScriptObject *transitionCallback;
@property (readonly, nonatomic) NSInteger visibleIndex;


+(BOOL)transitioning;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
+(void)startTransition;
+(void)stopTransition;
-(NSInteger)_relativeIndexFromIndex:(NSInteger)arg0 ;
-(id)_className;
-(id)_popHandler:(SEL)arg0 ;
-(id)attributeKeys;
-(id)initWithNavigationController:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_callCallbackWithWithTransition:(id)arg0 ;
-(void)_enqueueLoadingState:(id)arg0 ;
-(void)_handlePopFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)_startNextTransition;
-(void)popToViewAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)popViewWithCompletion:(id)arg0 ;
-(void)pushViewWithCompletion:(id)arg0 ;


@end


#endif