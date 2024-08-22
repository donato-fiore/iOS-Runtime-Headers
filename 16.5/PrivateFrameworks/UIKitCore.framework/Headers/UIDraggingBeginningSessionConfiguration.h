// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDRAGGINGBEGINNINGSESSIONCONFIGURATION_H
#define UIDRAGGINGBEGINNINGSESSIONCONFIGURATION_H

@class NSArray;


#import "UIDraggingSessionConfiguration.h"
#import "UIView.h"

@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration

@property (readonly, nonatomic) NSInteger dataOwner; // ivar: _dataOwner
@property (nonatomic) CAPoint3D initialCentroidInSourceWindow; // ivar: _initialCentroidInSourceWindow
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) UIView *sourceView; // ivar: _sourceView


+(id)configurationWithItems:(id)arg0 dataOwner:(NSInteger)arg1 initialCentroidInSourceWindow:(struct CAPoint3D )arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4 accessibilityEndpoint:(id)arg5 ;
+(id)configurationWithItems:(id)arg0 dataOwner:(NSInteger)arg1 pointerTouch:(id)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4 ;
+(id)configurationWithItems:(id)arg0 dataOwner:(NSInteger)arg1 touches:(id)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4 ;
-(id)initWithItems:(id)arg0 dataOwner:(NSInteger)arg1 requiredContextIds:(id)arg2 sourceView:(id)arg3 ;


@end


#endif