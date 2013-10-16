/* 
 * Motif
 *
 * Copyright (c) 1987-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these librararies and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
*/ 
/* 
 * HISTORY
*/ 
/*   $XConsortium: UilSymGl.h /main/9 1995/07/14 09:39:03 drk $ */

/*
*  (c) Copyright 1989, 1990, DIGITAL EQUIPMENT CORPORATION, MAYNARD, MASS. */

/*
**++
**  FACILITY:
**
**      User Interface Language Compiler (UIL)
**
**  ABSTRACT:
**
**      This include file contains external declarations of all
**	global data defining the language accepted by the Uil compiler.
**	This is exactly the global data generated by WML, plus any
**	invariant matching definitions.
**
**--
**/

#ifndef UilSymGl_h
#define UilSymGl_h

/*
 * Defined in files included in UilData.c
 */
externalref unsigned char		*constraint_tab;
externalref key_keytable_entry_type	*key_table;
externalref int				key_k_keyword_max_length;
externalref int				key_k_keyword_count;
externalref key_keytable_entry_type	*key_table_case_ins;
externalref unsigned char		**allowed_argument_table;
externalref unsigned char		*argument_type_table;
externalref unsigned char		**allowed_child_table;
externalref unsigned char		*child_class_table;
externalref char			**charset_xmstring_names_table;
externalref unsigned char		*charset_writing_direction_table;
externalref unsigned char		*charset_parsing_direction_table;
externalref unsigned char		*charset_character_size_table;
externalref char			**charset_lang_names_table;
externalref unsigned short int		*charset_lang_codes_table;
externalref unsigned short int		charset_lang_table_max;
externalref unsigned char		**allowed_control_table;
externalref UilEnumSetDescDef		*enum_set_table;
externalref unsigned short int		*argument_enumset_table;
externalref int				*enumval_values_table;
externalref int				uil_max_object;
externalref char			**uil_widget_names;
externalref int				uil_max_arg;
externalref char			**uil_argument_names;
externalref int				uil_max_child;
externalref char			**uil_child_names;
externalref int				uil_max_reason;
externalref char			**uil_reason_names;
externalref int				uil_max_enumset;
externalref int				uil_max_enumval;
externalref char			**uil_enumval_names;
externalref int				uil_max_charset;
externalref char			**uil_charset_names;
externalref unsigned short int		*related_argument_table;
externalref unsigned char		**allowed_reason_table;
externalref char			**tok_token_name_table;
externalref int				tok_num_tokens;
externalref char			**uil_widget_funcs;
externalref unsigned short int		*uil_gadget_variants;
externalref unsigned short int		*uil_urm_nondialog_class;
externalref unsigned short int		*uil_urm_subtree_resource;
externalref char			**uil_argument_toolkit_names;
externalref char			**uil_reason_toolkit_names;

externalref unsigned short int		uil_sym_user_defined_object;
externalref unsigned short int		uil_sym_default_charset;
externalref unsigned short int		uil_sym_isolatin1_charset;

externalref int				uil_max_value;
externalref char			*uil_datatype_names[];


#endif /* UilSymGl_h */
/* DON'T ADD STUFF AFTER THIS #endif */
