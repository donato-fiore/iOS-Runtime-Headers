// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPVARSTOREIMPOEXPO_H
#define NWPVARSTOREIMPOEXPO_H

@class NSString;
@protocol NWPVarStoreProtocol;

#import <Foundation/Foundation.h>

#import "ImpoExpoService.h"

@interface NWPVarStoreImpoExpo : NSObject <NWPVarStoreProtocol>

 {
    ImpoExpoService *ieservice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)storeUnderName:(id)arg0 item:(id)arg1 ;
-(NSInteger)deleteItemsMatchingPredicate:(id)arg0 ;
-(id)_initWithImpoExpo:(id)arg0 ;
-(id)fetchItemUnderName:(id)arg0 verificationBlock:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)listItemsNameWithPrefix:(id)arg0 sortDescriptor:(id)arg1 ;


@end


#endif