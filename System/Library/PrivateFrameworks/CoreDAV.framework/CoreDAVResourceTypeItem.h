/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _addressBook;
	CoreDAVItemWithNoChildren* _searchAddressBook;
	CoreDAVItemWithNoChildren* _shared;
	CoreDAVItemWithNoChildren* _principal;
	CoreDAVItemWithNoChildren* _collection;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * addressBook;                    //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * searchAddressBook;              //@synthesize searchAddressBook=_searchAddressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * shared;                         //@synthesize shared=_shared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * principal;                      //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * collection;                     //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;                //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,readonly) NSSet * stringSet; 
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVItemWithNoChildren *)collection;
-(void)write:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)shared;
-(void)setShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)addressBook;
-(void)setAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCollection:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setPrincipal:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)principal;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(CoreDAVItemWithNoChildren *)searchAddressBook;
-(NSSet *)stringSet;
-(BOOL)isTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSearchAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
@end

