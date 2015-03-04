//
//  Scriber.h
//  Scriber
//
//  Created by Andrew Johnson on 12/6/14.
//  Copyright (c) 2014 Scriber. All rights reserved.
//

#ifndef Scriber_Scriber_h
#define Scriber_Scriber_h

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import <UIKit/UIKit.h>


/** <#The Scriber API tracks subscriptions, in-app purchases, and usage.#> */
@interface Scriber : NSObject <SKPaymentTransactionObserver> { }


/** <#Set the API key you get when you sign up at Scriber.io. Call this method before you do anything else. Log in a user and start tracking. Call this method in applicationDidFinishLaunching.#>
 @param <#key#> <#your Scriber API key, find at scriber.io/#>
 */
+(void) loginUserForAPIKey:(NSString*)key;


/** <#optional, for user-level metrics and contact#>
 
 @param <#email#> <#the user's email in your app, nil values are ignored#>
 */
+(void) setEmail:(NSString*)email;


/** <#optional, for user-level metrics and contact#>
 
 @param <#username#> <#the user's username in your app, nil values are ignored#>
 */
+(void) setUsername:(NSString*)username;


/** <#optional, for keying info to IDs in a different database#>
 
 @param <#userID#> <#a string to identify the user, nil values are ignored#>
 */
+(void) setUserID:(NSString*)userID;


/** <#logout and don't send further analytics#>
 */
+(void) logout;


/** <#the user's email if one has been set in Scriber#>
 */
+ (NSString*) email;


/** <#record a custom event with just a label#>
 
 @param <#label#> <#the label as you want to see it on scriber.io, nil values are ignored#>
 */
+(void) recordLabel:(NSString*)label;


/** <#record a custom event with a dictionary#>
 
 @param <#info#> <#the info dictionary can include a label key and other keys too, see http://scriber.io/docs/#/iOS#>
 */
+(void) recordInfo:(NSDictionary*)info;


@end

#endif

