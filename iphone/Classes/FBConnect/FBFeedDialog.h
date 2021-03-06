/*
 * Copyright 2009 Facebook
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/
#ifdef USE_TI_FACEBOOK

#import "FBDialog.h"

@interface FBFeedDialog : FBDialog {
  long long _templateBundleId;
  NSString* _templateData;
  NSString* _bodyGeneral;
  NSString* _userMessagePrompt;
}

/**
 * The id for a previously registered template bundle.
 */
@property(nonatomic) long long templateBundleId;

/**
 * A JSON string containing template data.
 *
 * See http://wiki.developers.facebook.com/index.php/Template_Data
 */
@property(nonatomic,copy) NSString* templateData;

/**
 * Additional markup for a short story.
 */
@property(nonatomic,copy) NSString* bodyGeneral;

/**
 * Text you provide the user as a prompt to specify a userMessage. This appears
 * above the box where the user enters a custom message.
 * For example, "What's on your mind?"
 */
@property(nonatomic,copy) NSString* userMessagePrompt;

@end

#endif