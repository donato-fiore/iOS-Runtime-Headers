// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVRCEXPIRINGSTORE_H
#define _TVRCEXPIRINGSTORE_H

@class NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _TVRCExpiringStore : NSObject

@property (retain, nonatomic) NSMapTable *identifierToBlockMap; // ivar: _identifierToBlockMap
@property (retain, nonatomic) NSMutableSet *store; // ivar: _store


-(BOOL)containsIdentifier:(id)arg0 ;
-(id)init;
-(void)_removeIdentifierAndPerformCompletion:(id)arg0 ;
-(void)addIdentifier:(id)arg0 withExpiration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)removeIdentifier:(id)arg0 ;


@end


#endif