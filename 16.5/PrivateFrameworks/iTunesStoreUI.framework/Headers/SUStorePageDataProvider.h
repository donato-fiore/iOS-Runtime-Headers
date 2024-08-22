// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSTOREPAGEDATAPROVIDER_H
#define SUSTOREPAGEDATAPROVIDER_H

@class ISDataProvider, ISPropertyListProvider;


#import "SUClientInterface.h"

@interface SUStorePageDataProvider : ISDataProvider

@property (retain) SUClientInterface *clientInterface; // ivar: _clientInterface
@property NSInteger outputType; // ivar: _outputType
@property (copy) ISPropertyListProvider *propertyListDataProvider; // ivar: _propertyListDataProvider
@property (readonly) BOOL shouldProcessTouchIDDialogs;


-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg0 ;


@end


#endif