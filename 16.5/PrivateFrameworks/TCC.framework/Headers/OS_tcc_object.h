// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OS_TCC_OBJECT_H
#define OS_TCC_OBJECT_H

@class object, NSString;
@protocol OS_tcc_object;



@interface OS_tcc_object : object <OS_tcc_object>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif