// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTESTWIDGETSTACKICONDESCRIPTOR_H
#define SBHTESTWIDGETSTACKICONDESCRIPTOR_H

@class NSString, NSArray;
@protocol SBHTestWidgetIconDescriptor;

#import <Foundation/Foundation.h>


@interface SBHTestWidgetStackIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *widgetIconDescriptors; // ivar: _widgetIconDescriptors


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sbh_isValidWithError:(*id)arg0 ;
-(NSUInteger)sbh_iconDescriptorType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithWidgetIconDescriptors:(id)arg0 ;


@end


#endif