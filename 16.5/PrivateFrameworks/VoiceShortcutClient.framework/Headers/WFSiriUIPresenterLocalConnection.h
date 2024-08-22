// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIUIPRESENTERLOCALCONNECTION_H
#define WFSIRIUIPRESENTERLOCALCONNECTION_H

@class NSString;
@protocol WFSiriUIPresenterConnection, WFSiriUIPresenterInterface;

#import <Foundation/Foundation.h>


@interface WFSiriUIPresenterLocalConnection : NSObject <WFSiriUIPresenterConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<WFSiriUIPresenterInterface> *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)initWithPresenter:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;


@end


#endif