// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIUIPRESENTER_H
#define WFSIRIUIPRESENTER_H

@protocol WFSiriUIPresenterConnection;

#import <Foundation/Foundation.h>


@interface WFSiriUIPresenter : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, nonatomic) NSObject<WFSiriUIPresenterConnection> *connection; // ivar: _connection


-(id)initWithConnection:(id)arg0 ;
-(void)performSiriRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)willBeginExecutingShortcutStep:(id)arg0 ;
-(void)willBeginExecutingShortcutWithActionCount:(id)arg0 ;


@end


#endif