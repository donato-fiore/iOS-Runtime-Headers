// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINPUTMIGRATIONUUIDPROVIDER_H
#define WFINPUTMIGRATIONUUIDPROVIDER_H

@class NSString;
@protocol WFUUIDProvider;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider>



@property (readonly, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger position; // ivar: _position
@property (readonly) Class superclass;


-(id)generateOutputUUIDForAction:(id)arg0 ;
-(id)initWithAction:(id)arg0 atPosition:(NSUInteger)arg1 ;


@end


#endif