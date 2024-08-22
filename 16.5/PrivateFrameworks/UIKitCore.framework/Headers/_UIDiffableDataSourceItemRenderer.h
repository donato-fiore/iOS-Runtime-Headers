// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDIFFABLEDATASOURCEITEMRENDERER_H
#define _UIDIFFABLEDATASOURCEITEMRENDERER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIDiffableDataSourceItemRenderer : NSObject <NSCopying>



@property (readonly, nonatomic) Class cellClass; // ivar: _cellClass
@property (readonly, nonatomic) NSString *cellReuseIdentifier; // ivar: _cellReuseIdentifier
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) id *rendererIdentifier; // ivar: _rendererIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 cellClass:(Class)arg1 handler:(id)arg2 ;
// -(id)initWithIdentifier:(id)arg0 cellClass:(Class)arg1 handler:(id)arg2 cellReuseIdentifier:(unk)arg3  ;


@end


#endif