// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC3VFX11BINDINGIMPL_H
#define _TTC3VFX11BINDINGIMPL_H

@class SwiftObject, NSString, NSArray, NSData;
@protocol _TtP3VFX10VFXBinding_;



@interface _TtC3VFX11BindingImpl : SwiftObject <_TtP3VFX10VFXBinding_>

 {
    ? entityManager;
    ? identifier;
    ? objectName;
    ? bindingName;
    ? userManual;
    ? isPublic;
    ? enumName;
    ? enumCases;
    ? property;
}


@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSArray *enumCases;
@property (nonatomic, copy) NSString *enumName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) CGFloat max; // ivar: max
@property (nonatomic) CGFloat min; // ivar: min
@property (nonatomic) NSInteger objectID; // ivar: objectID
@property (nonatomic, copy) NSString *objectName;
@property (nonatomic, copy) NSData *rawValue;
@property (nonatomic) NSInteger semantic; // ivar: semantic
@property (nonatomic) NSInteger type; // ivar: type
@property (nonatomic, copy) NSString *userManual;




@end


#endif