// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITORP33_A9926FE49755427AE9EF62E6C77745C430ACTIONPARAMETERSTATEDATASOURCE_H
#define _TTC14WORKFLOWEDITORP33_A9926FE49755427AE9EF62E6C77745C430ACTIONPARAMETERSTATEDATASOURCE_H

@protocol WFActionEventObserver;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditorP33_A9926FE49755427AE9EF62E6C77745C430ActionParameterStateDataSource : NSObject <WFActionEventObserver>

 {
    ? action;
    ? parameter;
    ? undoManager;
    ? isSetting;
}


@property (nonatomic, readonly) NSInteger hash;


-(id)init;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)dealloc;


@end


#endif