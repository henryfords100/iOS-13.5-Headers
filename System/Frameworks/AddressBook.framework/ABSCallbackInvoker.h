/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABSCallbackInvoker : NSObject {

	void* addressBook;
	/*function pointer*/void* callback;
	void* context;

}
+(void)invokeOnThread:(id)arg1 callback:(/*function pointer*/void*)arg2 withAddressBook:(void*)arg3 context:(void*)arg4 ;
-(void)invoke;
@end
