// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTATUSDOMAIN_H
#define STSTATUSDOMAIN_H

@class NSString, NSArray;
@protocol STStatusDomainClientHandle, STStatusDomainData, STStatusDomainServerHandle;

#import <Foundation/Foundation.h>


@interface STStatusDomain : NSObject <STStatusDomainClientHandle>

 {
    BOOL _invalidated;
    id *_dataChangedBlock;
    id *_dataChangedWithContextBlock;
}


@property (readonly, copy, nonatomic) NSObject<STStatusDomainData> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly, nonatomic) NSObject<STStatusDomainServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;


+(NSUInteger)statusDomainName;
-(id)init;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeData:(id)arg0 ;
-(void)observeData:(id)arg0 forDomain:(NSUInteger)arg1 withChangeContext:(id)arg2 ;
-(void)observeDataWithBlock:(id)arg0 ;


@end


#endif